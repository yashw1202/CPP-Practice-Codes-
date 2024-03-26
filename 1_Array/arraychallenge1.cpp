                //given an array a[] of size n. For every i from 0 to n-1 
                //output the max(a[0],a[1],...,a[i]) (max till i) 
#include<iostream> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    int mx=  -19999999 ;
    for(int i=0; i<n; i++){
        
        mx = max(mx, array[i]); 
        cout<<mx<<" ";
        
    }
    return 0;
}   