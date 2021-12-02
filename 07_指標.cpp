#include<iostream>
using namespace std;
int main()
{
	int a = 5;
	int *iptr = &a;//位置為iptr的內容設為a的位置
  
	cout << "a = " << a << endl;
	cout << "a(*iptr) = " << *iptr << endl;
	
	cout << "the address of a(&a) = " << &a << endl;
	cout << "the address of a(iptr) = " << iptr << endl;
	
	cout << "the size of a = " << sizeof(a) << endl;//4 bytes
	cout << "the size of iptr = " << sizeof(iptr) << endl;//8 bytes
  
	return 0;
}
