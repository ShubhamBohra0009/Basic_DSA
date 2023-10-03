#include<bits/stdc++.h>
#include<array>
using namespace std;

void display(int arr[]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void insertbeginning(int val,int *&arr){
    arr.unshift(val);
    display(arr);
}

int main(){

    int input =5;
    // int arr[]={1,2,3,4,5};
    array<int,5>arr={1,2,3,4,5};

    // cout<<"Before anything: ";
    // display(5,arr);
    cout<<"Insert at Beginning: ";
    // insertbeginning(6,arr);
    // cout<<"Insert at Ending: ";
    // insertending(7);
    // cout<<"Insert at Position: ";
    // insertatpos(8,4);



    return 0;
}