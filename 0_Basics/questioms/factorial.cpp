#include<iostream>
#include<cmath>
using namespace std;

int factorial(int num){
    int fact = 1;
    for (int i=2;i<=num;i++){
        fact = fact*i;
    }    
    return fact;
}
int main(){
    int n1;
    cin>>n1;
    cout<<factorial(n1)<<endl;
    return 0 ;
}