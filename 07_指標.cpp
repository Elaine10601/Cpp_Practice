#include<iostream>
using namespace std;
int main()
{
	int a = 5;
	int *iptr = &a;//位置為iptr的內容設為a的位置
	
  	//a
	cout << "a = " << a << endl;
	cout << "a(*iptr) = " << *iptr << endl;
	
	//a的位址
	cout << "the address of a(&a) = " << &a << endl;
	cout << "the address of a(iptr) = " << iptr << endl;
	
	//佔的記憶體容量
	cout << "the size of a = " << sizeof(a) << endl;//4 bytes
	cout << "the size of iptr = " << sizeof(iptr) << endl;//8 bytes
  
	return 0;
}






//陣列
#include<iostream>
using namespace std;
int main()
{
	int a[5] = {6,7,8,9,10};
	int *iptr = a;//a為陣列的起始位址
	
	//a[0]
	cout << "a[0] = " << a[0] << endl;
	cout << "a[0] = " << *iptr << endl;
	
	//a[0]的位址
	cout << "the address of a[0](&a[0]) = " << &a[0] <<endl;
	cout << "the address of a[0](a) = " << a <<endl;
	cout << "the address of a[0](iptr) = " << iptr <<endl;
	
	//a[1]
	cout << "a[1] = " << a[1] << endl;
	cout << "a[1] = " << *(iptr+1) << endl;
	
	//a[1]的位址
	cout << "the address of a[1](&a[1]) = " << &a[1] <<endl;
	cout << "the address of a[1](iptr+1) = " << iptr+1 <<endl;
	
	return 0;
}
