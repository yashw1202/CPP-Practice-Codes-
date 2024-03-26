/* code to find the record breaking day in amusement park*/ 
#include<iostream>
using namespace std;
int rebd(int arr[],int n, int maxp){
    int day;
    for(int key=0; key<n; key++){
        if(arr[key]==maxp){
            day= key+1;
            return day;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int people[n];
    for(int i=0; i<n; i++){
        cin>>people[i];
    }
    int maxp=people[0];
    for(int i=1; i<n; i++){
        maxp=max(maxp,people[i]);
    }
    cout<<"record was broke on day "<<rebd(people,n,maxp)<<endl;
    cout <<maxp;
    return 0;
}