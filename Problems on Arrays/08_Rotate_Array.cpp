#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v={1,2,3,4,5,6,7};
    int k=3;

    cout<<"Elements before rotating: ";
    for(int i:v){
        cout<<i<<" ";
    }
    rotate(v.begin(),v.begin()+k,v.end());

    cout<<endl<<"Elements after rotating: ";
    for(int i:v){
        cout<<i<<" ";
    }


    return 0;
}