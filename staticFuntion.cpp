#include <iostream>
using namespace std;

class Person
{
    string name;

public:
    int age;

    static int classID;
    bool state;

    // accessing non static variable from static function

    static void display()
    {

        cout << "The class ID is :" << classID << endl;
    }

    static void stateFunc(Person &obj)

    {
        cout << "The state is :" << obj.state << endl;
    }
};
int Person::classID = 10;

int main()
{

    Person noman;
    noman.state = false;
    Person::stateFunc(noman);
    Person::display();
    Person::classID = 20; cout<<"\n";
    cout<<noman.classID;
    return 0;
}