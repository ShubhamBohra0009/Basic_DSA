// Removing all the vowels from a string
#include <iostream>
#include <string.h>
using namespace std;

void removeVowel(string &str)
{

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str = str.substr(0, i) + str.substr(i + 1);
            i--;
        }
    }
    cout<<"String after removing the vowels: "<<str;
}

int main()
{

   string s = "Take u forward is Awesome";
    removeVowel(s);

    return 0;
}