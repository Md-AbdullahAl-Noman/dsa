#include<iostream>
using namespace std;


//even or odd?? use bitwise operator
bool isEven(int num)
{
    if(num&1)//true means odd  false means even-->5(101)-->101&001-->1-->odd
    {
        return 0;
    }else{
        return 1;
    }


}
int main()
{   

    int num;
    cout<<"Enter number to check for even or odd : ";
    cin>>num;
    if(isEven(num))
    {
        cout<<"Number is even"<<endl;
    }else{
        cout<<"Number is odd"<<endl;
    }



    return 0;
}