#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char array[n + 1];
    cin >> array;
    bool status = false;
    for (int i = 0; i < (n + 2) / 2; i++)
    {
        if (array[i] == array[(n - 1) - i])
        {
            status = true;
        }
        else
        {
            status = false;
            break;
        }
    }
    if (status == true)
    {
        cout << "word is a pelindrome ";
    }
    else
    {
        cout << "word is not a palindrome";
    }
    return 0;
}