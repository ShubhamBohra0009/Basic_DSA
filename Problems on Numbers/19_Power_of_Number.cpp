#include<iostream>
#include<math.h>
using namespace std;

int main(){

    //Method 1
    
    int num=2;
    int power=5;

    cout<<pow(num,power)<<endl;

    //Method 2

    int n = 5, k = 3;
	int ans = 1;
	for (int i = 0; i < k; i++) {
		ans = ans * n;
	}
	cout <<n<<" raised to the power "<<k<<" is "<< ans;
}