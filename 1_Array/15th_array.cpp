// subarray 
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int maxSUM = INT8_MIN;
    for (int x = 0; x < n; x++)
    {
        for (int y = x; y < n; y++)
        {
            int sum = 0;
            for (int z = x; z <= y; z++)
            {
                sum = sum + array[z];
            }
            cout << endl;
            maxSUM = max(maxSUM, sum);
        }
        cout << endl;
    }
    cout << maxSUM << endl;

    return 0;
}