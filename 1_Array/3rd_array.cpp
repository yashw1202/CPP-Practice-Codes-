                    //maximum and minimum value of array
#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n];
    int maxnum= arr[0];
    int minnum = arr[0];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxnum=max(arr[0],arr[i]);
        minnum=min(arr[0],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    cout<<endl;    
    cout<<"The maximum number and minimum numbe is:- "<<endl;
    cout<<maxnum<<" "<<minnum<<endl;
    
    return 0;
}