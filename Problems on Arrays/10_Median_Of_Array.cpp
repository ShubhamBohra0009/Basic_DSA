#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

double median(int arr[],int size){


sort(arr,arr+size);

if(size%2==0){
    int ind1= size/2;
    int ind2= (size/2)-1;
    return (double)(arr[ind1]+arr[ind2])/2;

}

else{
    return arr[size/2];
}


return -1;

}


int main(){

    int arr1[]={2,3,1,3,5};
    int arr2[]={2,5,1,7};


    // cout<<"Median is "<<median(arr1,5);

    cout<<"Median is "<<median(arr2,4);

    return 0;
}