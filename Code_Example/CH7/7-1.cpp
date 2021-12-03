//filename :7-1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,d,i;
    float x1,x2;
    cout << "��J�@���G����{�����Y��a,b,c�G";
    cin >> a >> b >> c;
    
    if (a!=0)
    {
      d=b*b-4*a*c;
    
      if (d>0)
        {
          x1=(-b+sqrt(d))/(2*a);
          x2=(-b-sqrt(d))/(2*a);
          cout  << endl << "��{����2�Ӭ۲����" << endl;
          cout << "x1=" << x1 << endl;
          cout << "x2=" << x2 << endl; 
        }
      else if (d==0)
        {
          x1= -b/(2*a);
          cout  << endl << "��{����2�Ӭ۵����" << endl;
          cout << "x1=x2=" << x1 << endl;
        }
      else
        {
          i = sqrt(-d)/(2*a);       
          cout  << endl << "��{����2�Ӧ@�m�Ʈ�" << endl;
          cout << "x1="<< -b/(2*a) << "+" << i << "i" << endl;
          cout << "x2="<< -b/(2*a) << "-" << i << "i" << endl;
        }
     }
    else
      cout  << endl << "���趵���Y��a���i�H��0" << endl;

 	return 0;
}

