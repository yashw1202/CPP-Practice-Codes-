#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];

    // array input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int col_strt = 0, col_end = m - 1, row_strt = 0, row_end = n - 1;

    while (row_strt <= row_end && col_strt <= col_end)
    {
        // row strt
        for (int col = col_strt; col <= col_end; col++)
        {
            cout << a[row_strt][col] << " ";
        }
        row_strt++;

        // col end
        for (int row = row_strt; row <= row_end; row++)
        {
            cout << a[row][col_end] << " ";
        }
        col_end--;

        // row end
        for (int col = col_end; col >= col_strt; col--)
        {
            cout << a[row_end][col] << " ";
        }
        row_end--;

        // col strt
        for (int row = row_end; row >= row_strt; row--)
        {
            cout << a[row][col_strt] << " ";
        }
        col_strt++;
    }

    return 0;
}