//filename :6-4 
#include <iostream>
using namespace std;
int main()
{
	char Str1[]={ 'H', 'e', 'l', 'l', 'o','!'};
	char Str2[]="Hello!";
    cout << "Str1 佔用的記憶體空間 :" << sizeof(Str1) << endl;
	cout << "字元陣列 Str1 的內容 :" << Str1 << endl << endl;
	cout <<"Str2 佔用的記憶體空間 : " << sizeof(Str2) << endl;
	cout << "字元陣列 Str2 的內容 :" << Str2;

 	return 0;
}

