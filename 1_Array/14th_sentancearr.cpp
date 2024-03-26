#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char array[n+1];
    cin.getline(array, n);
    cin.ignore();
    int maxlength=0, currlength = 0;
    int i = 0;
    while(array[i] != '\0' ){
        if(array[i] == ' ' || array[i] == '\0' ){
            if(currlength>maxlength){
                maxlength=currlength;
                
            }
        }
    }

    cout<< maxlength  <<endl;
    
    
    return 0;
}