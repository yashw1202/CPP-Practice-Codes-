#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if( ch>=0 || ch<0){
        cout<<"character is a numeric "<<endl;
    }
    else if(ch>='a' && ch<='z'){
        cout<<"lowercase"<<endl;
    }
    else if( ch>= 'A' && ch<='Z'){
        cout<<"Upper case"<<endl;
    }
    else{
        cout<<"Special character"<<endl;
    }
    return 0;

}