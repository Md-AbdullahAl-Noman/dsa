#include <iostream>
using namespace std;

#include "exportClass.cpp"

class Pc
{
    int id;

public:
    string brand;
    float price;

   
    int getId()
    {

        if (brand == "Intel")
            return id;

        else
            return -1;
    }

    void setId(int i)
    {

        id = i;
    }

    /**
     * Constructor for the Pc class.
     * This constructor is called when an object of Pc is created.
     * It initializes the brand to "Intel", price to 300, and id to 11011.
     * It also prints a message indicating that the constructor was called.
     */
    Pc()
    {
        brand = "Intel";  // Set the brand to "Intel"
        price = 300.0f;   // Set the price to 300
        id = 11011;       // Set the id to 11011
        
        std::cout << "Constructor called at object creation" << std::endl;
    }
};
int main()

{
    Pc *p = new Pc();
    (*p).brand="AMD";
    (*p).brand="Intel";
    cout<<"Price is :"<<(*p).price<<endl;
    cout<<"Brand is :"<<(*p).brand<<endl;
    cout<<"Id is :"<<(*p).getId()<<endl;

    Hero *h = new Hero();
    h->name="Abdullah";
    cout<<"Hero object name is :"<<h->name<<endl;

    
    return 0;
}
