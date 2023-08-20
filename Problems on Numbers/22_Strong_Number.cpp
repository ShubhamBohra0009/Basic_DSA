// When the sum of factorial of individual digits of a number is equal to the original number the number is called a strong number. 
// Strong number is also known as Krishnamurthi number/Peterson Number.

#include<bits/stdc++.h>
using namespace std;

class ST{
    public:

    int fact(int n){
        if(n==0){
            return 1;
        }
        else{
         return n * fact(n-1);
        }
            
    }
};

int main(){

    int num=145;
    int Originalnum=num;
    int newNum=0;
    ST value;
    while(num>0){
    int digit = num%10;
    int FactDigit= value.fact(digit);
    newNum=newNum+ FactDigit;
    num/=10;
    }
    // cout<<newNum;
    if(newNum==Originalnum){
        cout<<"It is a Strong number";
    }
    else cout<<"It is not a strong number";


    return 0;
}