#include<iostream>
#include<math.h>
using namespace std;


int main(){
//decimal to binary

// int n;
// cin>>n;
// int i=0;

// int ans=0;

// while(n!=0){
//         int digit = n%10;
//         if(digit==1){
//             ans = ((digit *pow(2,i))+ans);
//         }

//         n=n/10;
//         i++;
// }
// cout<<ans;

////reverse 123 to 321
int n;
cin>>n;
int i=0;

int ans=0;

while(n!=0){
        int digit = n%10;
        
            ans = (ans *10+digit);
        

        n=n/10;
       
}
cout<<ans;

}




