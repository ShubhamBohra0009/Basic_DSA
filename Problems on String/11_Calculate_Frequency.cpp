// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string s = "Yes I can and yes I will";
//     sort(s.begin(),s.end());
//     int count=1;
//     char ch= s[0];

//     for(int i=1; i<s.size();i++){

//         if(s[i]==ch){
//             count++;
//         }
//         else{
//             cout<<ch<<count<<" ";
//             count=1;
//             ch=s[i];
//         }
//         cout<<ch<<count<<" ";
//     }


//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Yes I can and yes I will";
    unordered_map<char, int> freq; // Using a hash map to store character frequencies

    for (char ch : s) {
        if (ch != ' ') { // Ignore spaces
            freq[ch]++;
        }
    }

    for (auto it : freq) {
        cout << it.first << it.second << " ";
    }

    return 0;
}











// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// int main(){

//     string s= "I Can and I will";
//     cout<<s.size()<<endl;
//     int n=s.size();

//     sort(s.begin(),s.end());

//     cout<<s;
//     cout<<endl<<s.size()<<endl;

//     for(char c:s){

//     cout<<count(s.begin(),s.end(),c);
//     }


//     return 0;
// }

// Method 1

// #include <iostream>
// #include <algorithm>
// using namespace std;
// void Printfrequency(string str)
// {
//   sort(str.begin(), str.end());
//   char ch = str[0];
//   int count = 1;
//   for (int i = 1; i < str.length(); i++)
//   {
//     if (str[i] == ch)
//       count++;
//     else
//     {
//       cout << ch << count << " ";
//       count = 1;
//       ch = str[i];
//     }
//   }
//   cout << ch << count << " ";
// }

// int main()
// {
//   string str = "takeuforward";
//   Printfrequency(str);
//   return 0;
// }

// Method 2

// #include <iostream>
// using namespace std;

// void Printfrequency(string str)
// {
//   int freq[26] = {0};
//   for (int i = 0; i < str.length(); i++)
//   {
//     freq[str[i] - 'a']++;
//   }
//   for (int i = 0; i < 26; i++)
//   {
//     if (freq[i] != 0)
//     {
//       cout << (char)(i + 'a') << freq[i] << " ";
//     }
//   }
// }

// int main()
// {
//   string str = "takeuforward";
//   Printfrequency(str);
//   return 0;
// }