//filename :6-6 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str1[]="abc";  //str1[]�O�r���}�C�A�C�Ӱ}�C�������O�ܼ�
	string str2="abc";  //str2�O����
	cout << "str1=" << str1 << endl;
	cout << "C�y�����A�r��str1������=" << sizeof(str1) << endl;
	cout << "str2=" << str2 << endl;
	cout << "C++���A�r��str2������=" << str2.length() << endl;	
 	return 0;
}

