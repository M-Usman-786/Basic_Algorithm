#include <iostream>
using namespace std;

int main()
{
   int i, j, l, m, n;
   cout << "\n\n Print the Floyd's Triangle:\n";
   cout << "---------------------------------\n";
   cout << " Input number of rows: ";
   cin >> n;
   for (i = 0; i < n; i++)
   {
      if (i % 2 == 0)
      {
         l = 1;
         m = 0;
      }
      else
      {
         l = 0;
         m = 1;
      }
      for (j = 0; j <= i; j++)
         if (j % 2 == 0)
            cout << l;
         else
            cout << m;
      cout << endl;
   }
}
