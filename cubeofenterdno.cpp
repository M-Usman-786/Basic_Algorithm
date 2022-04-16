#include <iostream>
using namespace std;
int main()
{
    int num1, num2, sum = 0, r;
    cout << "Enter the number: ";
    cin >> num1;
    num2 = num1;
    for (r = 1; r <= num1; r++)
    {
        cout << "The cube of " << r << " is: " << r * r * r << endl;
    }

    return 0;
}