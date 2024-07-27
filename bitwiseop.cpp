#include<iostream>
using namespace std;


int main()
{

//  int a=5;
//  int b=10;

//  cout<<"a&b "<<(a&b)<<endl;
//  cout<<"a|b "<<(a|b)<<endl;
//  cout<<"~b "<<~b<<endl;
//  cout<<"a^b "<<(a^b)<<endl;
 
// //left and right shift

// cout<<"Left shift one"<<" "<<(a<<1)<<endl;
// cout<<"Right shift one" <<" " <<(a>>1)<<endl;

//i++ --->use i first then increment-->post increment
//++i --->increment i first then use-->pre increment
//i-- --->use i first then decrement-->post decrement
//--i --->decrement i first then use-->pre decrement

// int i=10;


// cout<<"i++ "<<i++<<endl;
// //10,then i=11
// cout<<"++i "<<++i<<endl;
// //12,then i=12
// cout<<"i-- "<<i--<<endl;
// //12,then i=11
// cout<<"--i "<<--i<<endl;
// //10,then i=10
// cout<<"i "<<i<<endl;

//Q1
// int a,b=1;
// a=10;
// if(++a)
//     cout<<b;//this should execute=1
// else
//     cout<<++b;


// 

////Q2

int a=1;
int b=2;

if(a-- > 0 && ++b >2)
{
 cout<<"Inside if  block"<<endl;
}else{
    cout<<"Inside else block"<<endl;
}

cout<<"a :"<<a<<"b :"<<b<<endl;
int x=3;
cout<<(25*(++x))<<endl;

}