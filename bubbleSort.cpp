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
    bool swappedFlag=false;
    for(int i=1;i<size;i++)
    {   swappedFlag=false;
        for(int j=0;j<size-i;j++)
        {
            if(array[j]>array[j+1])
                {   

                    swap(array[j],array[j+1]);
                    swappedFlag=true;
                }
        }
        if(!swappedFlag)
         {
            break;
        }
    }

    //printing sorted array
    cout<<"Sorted by Bubble Sort: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }


//as there is no new round in bubble sort so space  complexity will be O(1)
//worst time complexity will be O(n^2)as in every round one element will be compared and swapped-->n(n-1)/2 -->O(n^2)
//best time complexity will be O(n) means the array is already sorted hence the number of round will be 1 and comparison will be n-1-->O(n)
}