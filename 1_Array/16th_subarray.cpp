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
    int currentsum = 0;
    int maxsum = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum += array[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }
        maxsum = max(maxsum, currentsum);
    }

    cout << maxsum;

    return 0;
}