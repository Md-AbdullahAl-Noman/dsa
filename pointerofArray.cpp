#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // arr is the address of the array same as &arr[0]
    int *ptr2 = &arr[3];
    cout << "Here ptr is the address of the array or the address of the first element of the array" << arr << "=" << ptr <<"Is also equal to : "<< &arr[0] << endl;

    cout<<endl;
    cout<<"The value stored in the address of the array is : "<<*ptr<<endl;
    cout<<*ptr2<<endl;
    cout<<"Here ptr+1 is the address of the second element of the array as adding 1 means after the 4 bits of the first element : "<<*(ptr+1)<<endl;
    cout<<*(ptr+3)<<" Is equal to : "<<arr[3]<<endl;
    //arr[i]=*(pointer+i)
    int i=4;
    cout<<i[arr]<<"="<<arr[i]<<" As :"<<*(arr+i)<<" Is same as "<<*(i+arr)<<endl;

    return 0;
}
