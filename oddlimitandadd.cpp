#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;

    cout << "\n\n Display n terms of odd natural number and their sum:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;
    cout << " The odd numbers are: ";
    for (i = 1; i <= n; i++)
    {
        int a = 2 * i - 1;
        cout << a << " ";
        int b{2 * i - 1};
        sum += b;
    }
    cout << "\n The Sum of odd Natural Numbers upto " << n << " terms are " << sum << endl;
    return 0;
}