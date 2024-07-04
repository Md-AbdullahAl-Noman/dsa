#include <iostream>
using namespace std;

class Car
{
 string brand;
public:
    string name;
    string color;
    char type;
    int price;

    Car(){

        cout<<"Default constructor"<<endl;
    }
    
    Car(string brand,string name,string color,char type,int price){

       this->brand=brand;
       this->name=name;
       this->color=color;
       this->type=type;
       this->price=price;



    }
    
    
    
    
    
    
    
    //custom copy constructor
    Car (Car obj){

        
        this->type=obj.type;
        this->price=obj.price;
        
    }
    
    
    
    
    
    string greetings(){


        return "Hello All client";
    }





    void print()
    {
        cout<<"Printing details"<<endl;
        cout<<"Car name is :"<<name<<endl;
        cout<<"Car color is :"<<color<<endl;
        cout<<"Car type is :"<<type<<endl;
        cout<<"Car price is :"<<price<<endl;
    }




    void setBrand(string brand)
    {

       this-> brand=brand;
    }


    string getBrand()
    {
        return brand;
    }
};

int main()
{

    Car car1;
    // car1.print();
    string g=car1.greetings();
    cout<<g<<endl;

    Car *c2 = new Car("Maruti","Swift","Red",'r',20000);     
    c2->print();

    //copy constructor
    Car c3(*c2);
    c3.print();
    // c3.greetings();

    Car c4(c3);
    cout<<c4.color;
   

    return 0;
}