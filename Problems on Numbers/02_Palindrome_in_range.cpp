#include<iostream>
using namespace std;

    void ispalindrome(int min,int max){
        int r=0;
        int num=min;
        int pal[min];
        int flag=0;
        int rev_num=0;

        while(min<=max){
        rev_num=0;
        num=min;


        while(num>0 ){
        r=num%10;
        rev_num=rev_num*10+r;
        num=num/10;
        }
        if(rev_num==min){
            cout<<min<<" is Palindrome\n";
            pal[flag]=min;
            flag++;
        }
        
        min++;
        }

        for (int j = 0; j < flag; j++)
        {
            cout<<pal[j]<<" ";
        }
        cout<<"\nThere are total "<<flag<<" Palindrome numbers in this range";
    }

int main(){
    int min=10;
    int max=50;

    ispalindrome(min,max);

    return 0 ;
}

