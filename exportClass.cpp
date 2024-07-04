#include<iostream>
using namespace std;

class Hero{

    public:
    string name;
    private:
    int age;
    char level;

    public:
    int getAge(){
        return age;
    }
    void setAge(int a){
        age=a;
    }

    char getLevel(){
        return level;
    }
    void setLevel(char l){
        level=l;
    }

};