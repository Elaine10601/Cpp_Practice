//filename :5-12
#include <iostream>
using namespace std;
int main()
{
    int i,num,count=0;
    cout << "�п�J�@�ӥ���ơG";
    cin >> num;
    cout << "�U�C��" << num << "���]�ơG" << endl;
    i=1;
    while(i<=num)
    {
     if (num%i==0)
       {
         cout << i;
         count++;
         if (i!=num)
           cout << ",";
       }
     i++; 
    }
    cout << "\n�`�@��" << count << "��\n";

 	return 0;
}

