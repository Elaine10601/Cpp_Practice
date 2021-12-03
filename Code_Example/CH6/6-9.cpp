//filename :6-9
#include <iostream>
using namespace std;
int main()
{
  int intNum;
  int *iptr=&intNum;
  cout << "請輸入intNum的值：";
  cin >> intNum;
  cout << "變數intNum的位址:" << &intNum << "\t變數intNum的值=" << intNum << endl;
  cout << "指標iptr指向位址:" << iptr << "\t依址取值 *iptr=" << *iptr << endl;
 	return 0;
}

