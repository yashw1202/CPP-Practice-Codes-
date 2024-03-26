#include <iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int array[n];
    for (int i=0; i<n; i++){
        cin>>array[n];
    }
    int i=0; 
    int repeater;
    while(i<n){
        int j=i;
        while(j<n){
            if(array[i]==array[j]){
                repeater=array[j];
            }
        }

    }
    cout<<repeater;
    return 0;
}