#include<bits/stdc++.h>
using namespace std;


int factorial(int n)
{
   if(n == 0)
   {
     return 1;
   }

return n * factorial(n-1);

}

int main(){

    int n=5;
    cout<<"Factorial of "<<n<<" is: "<<factorial(n);
    // int fact[n+1];
    //     fact[0]=1;
    //     for(int i=1;i<=n;i++){
    //         // if(i=1){
    //         //     fact[1]=1;
    //         // }
    //         // else{
    //         fact[i]= i*fact[i-1];
    //         // }
    //     }
    //     cout<<"The Factorial of "<<n<<" is: ";
    //     for(int i=1;i<=n;i++){
    //         cout<<fact[i]<<" ";
    //     }

        // input(n);


    return 0;
}