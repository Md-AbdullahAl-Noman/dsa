#include<iostream>
using namespace std;
#include "exportClass.cpp"

class Person{
   public:
    string name="Noman";
    
    int age =20;
   
};

int main(){
    // cout <<"Hello world";
    
    // Person p;
    // cout<<p.name<<p.age<<endl;
    // cout << "size of p: " << sizeof(p)<<endl;

    Hero noman;
    noman.name="Noman";
    cout<<"Size of noman: "<<sizeof(noman)<<endl;
    cout<<noman.name<<endl;
    // cout<<noman.age<<endl;
     noman.setAge(25);
     cout<<noman.getAge();
    return 0;
} 