#include<iostream>
using namespace std;


// int gcd(int a, int b){
    
//    while(b!=0){
//     int remainder=a%b;
//     a=b;
//     b=remainder;

//    }
//    return a;


// }

int gcd(int a, int b){  
if(a==0) return b;
if(b==0) return a;


while(a!=b){
    
if(a>b){
    a=a-b;
}else{
    b=b-a;
}
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