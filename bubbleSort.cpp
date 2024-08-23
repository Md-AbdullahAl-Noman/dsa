#include <iostream>
using namespace std;

//bubble sort-> if nth element there will be n-1 round.On each round means on nth round nth largest element will be at the correct position or sorted from the end.
//on each round one element will be sorted
//first loop will run n-1 times as round from 1.
//second loop is for comparision which will be conducted till n-round (as each round one element will be sorted and out from the comparison array) from 1.Each neighbour element will be compared and swapped
int main()
{
    int array[] = {50, 4, 13, 20, 11};
    int size=sizeof(array)/sizeof(array[0]);

    for(int i=1;i<size;i++)
    {
        for(int j=0;j<size-i;j++)
        {
            if(array[j]>array[j+1])
                swap(array[j],array[j+1]);
        }
    }

    //printing sorted array
    cout<<"Sorted by Bubble Sort: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }



    return 0;
}