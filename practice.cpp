#include <iostream>
using namespace std;
int main()
{
   int numb = 0;
   int i = 0;
   cout << "Enter the size of triangle = ";
   cin >> numb;
   while (i < numb)
   {
      for (int b = numb; b > i; b--)
      {
         cout << "*";
      }
      cout << "\n";
      i++;
   }
   return 0;
}
