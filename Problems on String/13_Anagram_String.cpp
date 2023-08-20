//#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
using namespace std;

int main(){

    string s1="ehllo";
    string s2="helol";

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());


    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
            cout<<"It's not Anagram"<<endl;
            return 0;
        }
        // else{}
    }
            cout<<"It's  Anagram";

    return 0;
}