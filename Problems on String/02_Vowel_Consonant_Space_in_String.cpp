#include<iostream>
#include<string.h>
using namespace std;

void isVCS( string str,int len){

    int vowel=0,constant=0,whitespace=0;

    for (int i = 0; i < len; i++) // converting given string to lowercase
  {
    str[i] = towlower(str[i]);
  }

    for(int i=0;i<len;i++){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
            vowel++;
        }
        else if(str[i]>'a' && str[i]<='z'){
            constant++;
        }
        else if(str[i]==' '){
            whitespace++;
        }

    }
    cout<<"Total length of the string is "<<len<<endl;
    cout<<vowel<<endl;
    cout<<constant<<endl;
    cout<<whitespace<<endl;

}

int main(){

    string s= "Take u forward is Awesome";
    // string s= "asbdflaksjdflkasdjfk;aslj";
    int length= s.length();
    //int length= strlen(s)-1;
    isVCS(s,length);



    return 0;
}