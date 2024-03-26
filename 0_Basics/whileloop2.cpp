#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    while(n>=0){
        if(n>0){
            cout<<"Your number is positive"<<endl;
        }
        else {
            cout<<"Your numbr is zero"<<endl;
        }
        
        cin>>n;
    }
    cout<<"your number is negative";
    return 0 ;
}