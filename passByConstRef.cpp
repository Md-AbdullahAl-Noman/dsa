#include<iostream>
using namespace std;

void print(const int& x) {
    x = 20;//error ,cant modify this 
    cout << x<< endl;
}

int main() {
    int a = 10;
    print(a);
    return 0;
}