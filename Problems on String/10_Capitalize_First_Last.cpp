// WAP to capitalize first and Last character of words of a string.

#include<bits/stdc++.h>
using namespace std;
    int main(){ 

        string str= "string is back";
        int length = str.length();
        // cout<<str.size();
        // cout<<length;

        for (int i = 0; i < length; i++)
        {
            if(i==0 || i== length-1){
                str[i]= toupper(str[i]);
            }
            else if(str[i]== ' '){
                str[i-1]= toupper(str[i-1]);
                str[i+1]= toupper(str[i+1]);
            }
        }

        cout<<"So the processed string is: "<<str;

    return 0;
}