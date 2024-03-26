#include <iostream>
using namespace std;

int main(){
    
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int key;
    cin>>key;
    bool status = false;
    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]== key){
                cout<<"["<<i+1<<","<<j+1<<"]"<<endl;
                status = true;
            }
            else{
                continue;;
            }
        }
    }
    if( status == false){
        cout<<"NOT FOUND !!!!!"<<endl;
    }

    cout<<"RESULTANT MATRIX IS :-"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}