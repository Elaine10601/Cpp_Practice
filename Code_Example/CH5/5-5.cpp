//filename :5-5
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,D;

    cout << "輸入一元二次方程式的係數a,b,c：";
    cin >> a >> b >>c;
    if (a!=0)
    {
       D=b*b-4*a*c;    
       if (D>0)
          cout << "相異實根\n";
       else if (D==0)
          cout << "相等實根\n";   
       else
          cout << "共軛複根\n";
     }
    else
       cout << "輸入的數值錯誤，兩次方的係數a不可為0\n";

 	return 0;
}

