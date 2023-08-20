#include<iostream>
using namespace std;

void perfect_Number(int n){

    int sum=0;
    for(int i=1; i<n-1;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<n<<" is a perfect number"<<endl;
    }
    else{
        cout<<n<<" is not a perfect number"<<endl;

    }

}

int main(){

perfect_Number(28);

    return 0;
}