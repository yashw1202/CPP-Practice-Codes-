#include<iostream>
#include<math.h>
using namespace std;
bool ifprime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b,sum=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(ifprime(i)){
            sum= sum+i ;
            
        }
    }
    cout<<sum<<endl;
    return 0;
}