#include <iostream>

using namespace std;

int main()
{

    int arr[]={4,32,64,12,94};
    int size= sizeof (arr)/ sizeof (int);
    int i=0,smallest=arr[0];
    
    while(i<size-1){
        if(arr[i]<smallest){
            smallest= arr[i];
            //cout<<i;
        }
            i++;
    }
    cout<<"The smallest element in the array is: "<<smallest;

    return 0;
}