#include<iostream>
using namespace std ;

int binary_search(int arr[],int n ,int key  ){
    int ip = 0;
    int ep = n;
    int mp = (ip+ep)/2 ;
    for(int i=0; i<n; i++){
        if(arr[i]<arr[mp]){
            int ep = mp-1;
        }
        else if(arr[i]>arr[mp]){
            int ip = mp+1;
        }
        else {
            return i;
        }
    }
}

int sort(int arr[], int n){
    int swap;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                swap = arr[j];
                arr[j] = arr[i];
                arr[i] = swap; 
            }
            else{
                continue;
            }
        }
    }
}

int main (){
    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int swap;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                swap = arr[j];
                arr[j] = arr[i];
                arr[i] = swap; 
            }
            else{
                continue;
            }
        }
    }
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}