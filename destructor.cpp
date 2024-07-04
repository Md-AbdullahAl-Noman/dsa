#include<iostream>
#include <string.h>

using namespace std;    


class Hero{
 
  public:
   char *name ;
   
   int health;
   int level;

   static int time;//not related to object creation only related to class

   Hero(){
       cout<<"constructor called"<<endl;
       name=new char[100];
       strcpy(name,"Noman");
    
    
   }
 
//destructor is  same as constructor
~Hero(){
    
    cout<<"Destructor called"<<endl;
}
 
};

int Hero::time=10;

int main(){
    Hero noman;
    noman.time=44;

    
    
    cout<<noman.name<<endl;
    cout<<noman.time<<endl;
    cout<<Hero::time<<endl;

    // if dynamically instantiated then manual destruction is required

    Hero *abir=new Hero();
    (*abir).name="Abir";
    cout<<abir->name<<endl;
    delete abir;
   




    return 0;
}