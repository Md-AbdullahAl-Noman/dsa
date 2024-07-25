#include<iostream>
using namespace std;



int main(){

    // cout<<"Enter your input to check";
    // // int a=cin.get();
    // char input;
    // cin>>input;

    // if(input >= 'a' && input <= 'z'){
    //     cout<<"Lowercase";
    // }
    // else if(input >='A' && input <= 'Z'){
      
    //   cout<<"Uppercase";
    // }
    // else if(input >= '0' && input <= '9'){
    //     cout<<"Digit";

    // }else{
    //  cout<<"Special character";
    // }

//1 to N print
    // int n;
    // cout<<"Enter the number :";
    // cin>>n;
    // int i=1;

    // while(i<=n){
    //     cout<<i<<" "<<endl;
    //     i+=1;
    // }
//sum of 1 to N

  int n,sum;
  cin>>n;
  int i=1;
  sum=0;

  while(i<=n)
  {
    sum=sum+i;
    i++;
  }
  cout<<"The total sum is:"<<sum<<endl;


}