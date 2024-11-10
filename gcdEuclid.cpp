#include<iostream>
using namespace std;


int gcd(int a, int b){
    
   while(b!=0){
    int remainder=a%b;
    a=b;
    b=remainder;

   }
   return a;


}
int main(){

cout<<"Enter your two numbers"<<endl;
int a,b;

cin>>a>>b;

int gcdIs=gcd(a,b);
cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcdIs<<endl;




}