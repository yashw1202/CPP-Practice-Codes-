#include <iostream>
using namespace std;
int main()
{
    int n, m, x;
    cin >> m >> n;
    cin >> x;
    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (array[i][j] == x)
            {
                cout << "element found" << endl;
                cout << "location is " << i + 1 << " row and " << j + 1 << " column" << endl;
            }
            
        }
        cout << endl;
    }
    return 0;
}