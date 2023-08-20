//Alternate methods for palindrome in range

//Method 1
#include<iostream>
using namespace std;
 
// A function to check if n is palindrome
bool isPalindrome(int n)
{
    int reverse = 0;
    int temp = n;
    while(temp>0) {
        reverse = reverse*10 + temp%10;
        temp = temp/10;
    }
                 
            // If n and reverse are same,
            // then n is palindrome
    if(n==reverse)return true;
    return false;
}
 
int main()
{
    int min = 100;
    int max = 150;
    for(int i=min; i<=max; i++) {
        if(isPalindrome(i)) {
            cout<<i <<" ";
        }
    }    
    return 0;
}

// Method 2

// vector is for dynamically allocating values to the array
// #include <iostream>
// #include <vector>
// using namespace std;

// bool isPalindrome(int num) {
//     int rev_num = 0;
//     int original_num = num;

//     while (num > 0) {
//         int r = num % 10;
//         rev_num = rev_num * 10 + r;
//         num = num / 10;
//     }

//     return (rev_num == original_num);
// }

// vector<int> generatePalindromes(int min, int max) {
//     vector<int> palindromes;

//     int largestPalindrome = 0;
//     for (int num = min; num <= max; num++) {
//         if (isPalindrome(num)) {
//             palindromes.push_back(num);
//             largestPalindrome = num;
//         }
//     }

//     cout << "The palindromes in the given range are: ";
//     for (int palindrome : palindromes) {
//         cout << palindrome << " ";
//     }
//     cout << endl;

//     cout << "There are " << palindromes.size() << " palindrome numbers in this range." << endl;

//     return palindromes;
// }

// int main() {
//     int min = 10;
//     int max = 50;

//     vector<int> palindromes = generatePalindromes(min, max);

//     return 0;
// }
