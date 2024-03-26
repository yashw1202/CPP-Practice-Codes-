#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    char arr[m+1];
    cin>>arr;
    int i =0;
    while(arr[i] != '\0'){
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}