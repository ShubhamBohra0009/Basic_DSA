// Removing all the whitespaces from a string
#include <iostream>
#include <string.h>
using namespace std;

void removeVowel(string &str)
{

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' )
        {
            str = str.substr(0, i) + str.substr(i + 1);
            i--;
        }
    }
    cout<<"String after removing white spaces: "<<str;
}

int main()
{

   string s = "I can and I will that is for sure";
    removeVowel(s);

    return 0;
}