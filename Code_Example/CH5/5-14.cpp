//filename :5-14
#include <iostream>
using namespace std;
int main()
{
      int h,row,star; 
      
      cout << "請輸入三角形的高度：";
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

