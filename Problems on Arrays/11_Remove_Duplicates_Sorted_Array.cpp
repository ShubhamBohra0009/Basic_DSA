#include<bits/stdc++.h>
// #include<algorithm>
#include<set>

using namespace std;

int removeDuplicates(int *arr,int size){

    set<int>set1;
    for(int i=0;i<size;i++){
        set1.insert( arr[i]);
    }
    int k= set1.size();
    int j=0;

    for(int x: set1){
        arr[j++]= x;
    }

    return k;

}

int main(){

    int arr[]= {1,2,3,3,4,4,5,6,6,6,6,7};

    int size= sizeof(arr)/sizeof(int);

    int resultIndex=removeDuplicates(arr,size);

    for (int i = 0; i < resultIndex; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}