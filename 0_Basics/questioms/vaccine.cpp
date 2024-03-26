#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,l,d,r;
    cin>>t>>endl;
	while(t--){
	    cin>>d>>l>>r;
	    if(d>=l && d<=r  ){
	        cout<<"Take second dose now"<<endl;
	    }
	    else if(d<l){
	        cout<<"Too Early"<<endl;
	    }
	    else{
	        cout<<"Too Late"<<endl;
	    }
	}
	return 0;
}
