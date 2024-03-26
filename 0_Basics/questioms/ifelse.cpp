#include<iostream>
using namespace std;
int main(){
    int savings;
    cin>> savings;
    
    if(savings>7000){
        
        if(savings>10000){
            cout<<"Road Trip with neha\n";
        } else{
            cout<<"Shopping with neha";
        }
    } else if(savings>5000){

        if(savings>6000){
            cout<<"Dinner with Rashmi\n";
        } else{
            cout<<"Snacks with Rashmi\n";
        }
    } else{

        if(savings>2000){
            cout<<"Party with Friends\n";

        } else{
            cout<<"Movie with Friends\n";
        }
    }
                                                        
    return 0;
}