#include<iostream>
#include<math.h>
using namespace std;

int main (){
    int a,b,c;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b>>c;
    int x = max( a, max(b,c));
    if(x==a || a*a==(b*b)+(c*c)){
        cout<<"Yes numbers are pythagorian triplets"<<endl;
    }
    else if(x==b || b*b==(a*a)+(c*c)){
        cout<<"Yes numbers are pythagorian triplets"<<endl;
    }
    else if(x==c || c*c==(a*a)+(b*b)){
        cout<<"Yes numbers are pythagorian triplets"<<endl;
    }
    else{
        cout<<"No, the numbers are not pythagorian triplets"<<endl;
    }

    return 0;
}