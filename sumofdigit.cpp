#include <iostream>
using namespace std;
int main()
{
    int num1, num2, sum = 0, r;
    cout << "Enter the number: ";
    cin >> num1;
    num2 = num1;
    while (num1 > 0)
    {
        r = num1 % 10;
        sum = sum + r;
        num1 = num1 / 10;
    }
    cout << "The sum of the " << num2 << " is : " << sum;
    return 0;
}