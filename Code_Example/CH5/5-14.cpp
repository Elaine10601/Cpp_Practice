//filename :5-14
#include <iostream>
using namespace std;
int main()
{
      int h,row,star; 
      
      cout << "�п�J�T���Ϊ����סG";
      cin >> h;
      
      row=1;
      do
        {
           star=1;
           do
             {
                cout << "*";
                star++;
             }
           while (star<=row);
           cout << endl;  
           row++;
        }
      while(row<=h); 

 	return 0;
}

