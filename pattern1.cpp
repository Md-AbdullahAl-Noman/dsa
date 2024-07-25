#include<iostream>
using namespace std;


int main()
{
//print n stars
    // int n;
    // cin>>n;
    // int i=1;

    // while(i<=n){
    //     int j=1;
    //     while(j<=n)
    //     {
    //         cout<<'*';
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }



//111
//222
//333
// int n;
// cin>>n;
// int i=1;

// while(i<=n){
//     int j=1;
//     while(j<=n)
//     {
//         cout<<i;
//         j++;

//     }
//     cout<<endl;

//     i++;
// }
/////123
/////123
/////123
// int n;
// cin>>n;
// int i=1;


// while(i<=n)
// {
//     int j=1;
//     while(j<=n)
//     {
//         cout<<j;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

/////123
/////456
/////789

int n;
cin>>n;
int i=1;
int count=1;

while(i<=n)
{
    int j=1;
    while(j<=n)
    {
        cout<<count<<" ";
        count = count+1;
        j++;
    }
    cout<<endl;
    i++;
}


}
