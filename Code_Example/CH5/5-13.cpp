//filename :5-13
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int i,j;
    i=0;
    while (i<=59)
      {
         system("cls");
         j=0;
         while(j<=i)
           {
             cout << " ";
             j++;
           }
         cout << "x-->";  
         i++;
         Sleep(50);            
      }
 	return 0;
}

