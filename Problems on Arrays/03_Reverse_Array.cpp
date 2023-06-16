#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5};
    int size= sizeof(arr)/sizeof(int);
    int temp=0;
    cout<<"Before Traversal: ";

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<"\n";

    for(int i=0;i<(size)/2;i++){
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }

    cout<<"After Traversal: ";

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }

    return 0;
}