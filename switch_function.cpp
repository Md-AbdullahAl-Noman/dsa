#include<iostream>
using namespace std;


int answer =1;
int power(int a,int b)
{
    for(int i=1;i<=b;i++)
    {
        answer*=a;
    }
    return answer;
}



int main()
{

    // switch(integral_exp)
    // { case int/char: -------------------->
        
        // default: // ------------------------->is optional
    // }

    // char ch='n';
    // int num =100;

    // switch(ch)
    // {
    //     case 'a':
    //         cout<<"a"<<endl;
    //         break;
    //     case 'b':
    //         cout<<"b"<<endl;
    //         break;
    //     case 'n':
    //         switch(num){
    //             case 10: cout<<num<<endl;
    //             break;
    //             case 100: cout<<num<<endl;
    //             break;
    //         }
    //         break;

    //     default: cout<<"default"<<endl;
        
    // }


/////////Suppose you have 1330 tk.now how many 100,50,20,10,1 notes make this amount


// int total_tk=2130;
// int notes[5]={100,50,20,10,1};
// int count[5]={0};


// for(int i=0;i<5;i++)
// {  
//     switch(notes[i])
//     { 

//         case 100:
//             count[i]=total_tk/100;
//             total_tk=total_tk%100;
//             break;
//         case 50:
//             count[i]=total_tk/50;
//             total_tk=total_tk%50;
//             break;
//         case 20:
//             count[i]=total_tk/20;
//             total_tk=total_tk%20;
//             break;
//         case 10:
//             count[i]=total_tk/10;
//             total_tk=total_tk%10;
//             break;
//         case 1:
//             count[i]=total_tk/1;
//             total_tk=total_tk%1;
//             break;


//     }
// cout<<count[i]<<" notes of "<<notes[i]<<endl;
// }
///////////////Funtion--->well defined task ;input -->function -->output
int c,d;
cin>>c>>d;


int output=power(c,d);
cout<<output<<endl;


















}