#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> maxHeap;//root element is the maximum element
    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(30);
    maxHeap.push(40);
    cout<<maxHeap.size()<<endl;

    int n=maxHeap.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxHeap.top()<<" ";
        maxHeap.pop();

    }

    priority_queue<int,vector<int>,greater<int>> minHeap;//root element is the minimum element>
    minHeap.push(100);
    minHeap.push(200);
    minHeap.push(50);
    minHeap.push(300);
    minHeap.push(400);
    cout<<minHeap.size()<<endl;
    int sizeMini=minHeap.size();
    for(int i=0;i<sizeMini;i++)
    {
        cout<<minHeap.top()<<" ";
        minHeap.pop();

    }
    return 0;
}