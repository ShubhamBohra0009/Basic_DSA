#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

int main(){

    int num=17;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if(num%i==0){
            cout<<"Number isn't prime"<<endl;
            break;
        }
        else{
            cout<<"Number is Prime"<<endl;
            break;
        }
    }
    


    return 0;
}

