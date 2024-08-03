#include <iostream>
using namespace std;

void printArray(int array[],int size){
    for(int i=0; i<size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void reverseArray(int array[],int n){
        int start = 0;
        int end=n-1;   
        while(start<=end)
        {
            swap(array[start],array[end]);
            start++;
            end--;
        } 
}


int main()
{
    int arrayA[10]={0,1,2,3,4,5,6,7,8,9};
    int arrayB[5]={10,20,30,40,50};
    
    cout << "Original arrays: " << endl;
    printArray(arrayA,10);
    printArray(arrayB,5);
    cout << "Reversed arrays: " << endl;
    reverseArray(arrayA,10);
    reverseArray(arrayB,5);
    printArray(arrayA,10);
    printArray(arrayB,5);
    

    return 0;
}