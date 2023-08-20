#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

string reverseWord(string str){
    int temp =0;
    int var= str.length()-1;
  for(int i=0;i<str.length()/2;i++){
      temp=str[i];
      str[i]= str[var-i];
      str[var-i]=temp;
      
  }
  return str;
}



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends