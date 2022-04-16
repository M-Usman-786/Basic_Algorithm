#include <iostream>
using namespace std;
int main()
{
   int n, num = 0, i;
   cout << "\n\n Revrese a number:\n";
   cout << "-----------------------------\n";
   cout << " Input any number: ";
   cin >> n;
   while (n != 0)
   {
      num = (num * 10) + (n % 10);
      n /= 10;
   }
   cout <<num;
   return 0;
}