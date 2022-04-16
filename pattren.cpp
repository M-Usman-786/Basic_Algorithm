#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int c;
    for (c = 1; c <= 6; c++)
    {
        cout << setw(c) << setfill('*') << " " << endl;
    }

    return 0;
}