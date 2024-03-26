                        //given an array a[] of size n. output sum of each
                        //subarray of the given array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    int sum=0;
    for( int i=0; i<n; i++){
        int sum=0;
        for (int j=i; j<n; j++){
            sum= sum+array[j];
            cout<<sum<<" ";
        }
    }
    return 0;
}