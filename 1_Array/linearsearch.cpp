#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int key){
    for(int j=0; j<n; j++){
        if(arr[j]== key){
            return j;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<linear_search(arr,n,key );
    return 0;
}