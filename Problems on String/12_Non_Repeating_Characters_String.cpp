#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "google";
    // string s = "God is always with me";
    unordered_map<char,int>map;

    for(char ch:s){
        if(ch != ' '){
            map[ch]++;
        }
    }
    for(auto it:map){
        if(it.second==1){
            cout<<it.first<<",";
        }
    }


    return 0;
}