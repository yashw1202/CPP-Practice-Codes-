        
#include<iostream>
using namespace std;

int main(){
    float n1,n2;
    cin>>n1;

    char op;
    cin>>op;
    cin>>n2;
    int sol;
    switch (op)
    {
    case '+':
        sol = n1+n2;
        cout<<sol<<endl;
        break;
    case '-':
        sol = n1-n2;
        cout<<sol<<endl;
        break;
    case '/':
        sol= n1/n2;
        cout<<sol<<endl;
        break;
    case '*':
        sol = n1*n2;
        cout<<sol<<endl;
        break;
    default:
        cout<<"Enter another operator :- "<<endl;
        break;
    }
    return 0;
}