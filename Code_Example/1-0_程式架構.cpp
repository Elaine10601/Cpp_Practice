//前置處理區
#include <iostream>
//設定區
using namespace std;//設定名稱空間
//宣告區
int age=15;//宣告公用變數
void fun();//宣告函式
//主程式區
int main()
{
  int i=5;//宣告區域變數
  cout << "Welcome to C++'s world !" << endl;
  fun();//呼叫函式
  cout << "i = " << i;
	return 0;//程式結束
}
//函式定義區
void fun()
{
  cout << "I am " << age << "year old." << endl;
}
