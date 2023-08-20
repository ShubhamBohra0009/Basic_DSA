#include<iostream>
#include<cmath>
using namespace std;

void isArmstrong(int num){

    int originalNum=num;
    int digit;
    int Arm=0;
    int temp=num,count=0;

    while(temp!=0){
        count++;
        temp=temp/10;
    }

    while(num>0){
        digit=num%10;
        Arm=Arm+pow(digit,count);
        num=num/10;
    }
    if(Arm==originalNum){
        cout<<"Number is Armstrong"<<endl;
    }
    else{
        cout<<"Number isn't Armstrong"<<endl;
    }

}

int main(){

    int num=1634;

    isArmstrong(num);



    return 0;
}