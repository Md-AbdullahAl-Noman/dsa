#include<iostream>
#include<stack>
#include<queue>
using namespace std;
//stack is LIFO--->Last in first out of elements

void stackFunction()
{   
    stack<string> s;
    //pushing elements into the stack
    s.push("Hello");
    s.push("Noman");
    s.push("Hay");
    cout<<s.size()<<endl;
    // how to print the full stack
   while(!s.empty())
   {
    cout<<s.top()<<" ";
    s.pop(); //removing the top element from the stack
   }
//    cout<<"top after printing"<<s.top()<<endl;
   stack<int> s2;
   s2.push(10);
   s2.push(20);
   s2.push(30);
   while(!s2.empty())
   {
    cout<<s2.top()<<" ";
    s2.pop(); //removing the top element from the stack
   }

    cout<<"Size "<<s2.size()<<endl;

    

}

void queueTest()
{

    queue<string>q1;
    q1.push("foo");
    q1.push("bar");
    cout<<q1.front()<<endl;
    cout<<q1.back()<<endl;
    q1.pop();
    cout<<"Size"<<q1.size()<<endl;
    cout<<q1.front()<<endl;
    cout<<q1.back()<<endl;
    q1.pop();
    cout<<"Size after popping "<<q1.size()<<endl;
    //queue is FIFO--->First in first out of elements
    queue<int> q2;


}
int main()
{

    stackFunction();
    queueTest();

    return 0;
}