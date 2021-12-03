//filename :6-6 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str1[]="abc";  //str1[]是字元陣列，每個陣列元素都是變數
	string str2="abc";  //str2是物件
	cout << "str1=" << str1 << endl;
	cout << "C語言型態字串str1的長度=" << sizeof(str1) << endl;
	cout << "str2=" << str2 << endl;
	cout << "C++型態字串str2的長度=" << str2.length() << endl;	
 	return 0;
}

