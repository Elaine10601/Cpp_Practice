//filename :5-5
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,D;

    cout << "��J�@���G����{�����Y��a,b,c�G";
    cin >> a >> b >>c;
    if (a!=0)
    {
       D=b*b-4*a*c;    
       if (D>0)
          cout << "�۲����\n";
       else if (D==0)
          cout << "�۵����\n";   
       else
          cout << "�@�m�Ʈ�\n";
     }
    else
       cout << "��J���ƭȿ��~�A�⦸�誺�Y��a���i��0\n";

 	return 0;
}

