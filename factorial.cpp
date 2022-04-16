#include <iostream>
using namespace std;
int main()
{
    int i, j = 1, k;
    cout << "Enter number for factorial: ";
    cin >> k;
    for (i = k; i >= 1; i--)
    {
        j = i * j;
    }
    cout << "factorial is: " << j << endl;
    return 0;
}