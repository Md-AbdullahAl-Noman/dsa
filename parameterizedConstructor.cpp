#include<iostream>
using namespace std;


class Person{

    public:
    string name;

    int age;

    char state;
   
    /**
     * Default constructor for the Person class.
     * This constructor initializes the name to "Noman1" and age to 25.
     */
    Person(){
        // Initialize the name to "Noman1"
        name = "Noman1";
        
        // Initialize the age to 25
        age = 25;
    }
    
    Person(string name,int age,char state){

        //this -> keyword points to current object address and act as a pointer,this will point to each new object not the parameter
        this ->name = name;
        this->age=age;
        this->state=state;

        cout<<"The address of this is same as the current object"<<this<<endl;
    }




};

int main(){


    // statically object creation 
    Person noman("NomanST",35,'S');
    // noman.name="Al Noman";
    cout<<noman.name<<endl;

    //dynamically object creation
    Person *p=new Person();
    p->name="Ali";
    cout<<p->name<<endl;


    Person *p1=new Person("Abdullah",25,'A');
    cout<<"The address of p1 is :"<<p1<<endl;
    std::cout<<p1->name<<" "<<p1->age<<" "<<p1->state<<endl;

    return 0;
}