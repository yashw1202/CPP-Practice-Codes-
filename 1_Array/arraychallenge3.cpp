/*code to find the lenth of longest subarray in a given array*/
#include<iostream>
using namespace std;
int main() {
    int n ;
    cin >> n;
    int array[n];
    for ( int i = 0; i < n; i++){
        cin>>array[i];
    }
    int current = 2;
    int pd = array[1]-array[0];
    int ans =2;
    int j = 2;
    while (j<n)
    {
        if (pd == array[j]-array[j-1]){
            current++;
        }
        else{
            pd = array[j]-array[j-1];
            current=2;
        }
        ans = max(ans, current);
        j++;
    }
    
    cout << ans << endl;
    
    

    return 0;
}