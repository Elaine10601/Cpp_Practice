//filename :5-10
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,num,sum=0;
    cout << "�n�p��ƻ�ƪ����ƩM�H";
    cin >> num;
    cout << "1~100�����A" << num << "�����Ʀ�";
    for(i=1;i<=100;i++)
    {
       if (i%num!=0)
         continue;
       cout << setw(4) << i ;
       sum+=i;
    }
    cout << endl << num << "�����ƩM��" << sum;

 	return 0;
}

