//filename :6-9
#include <iostream>
using namespace std;
int main()
{
  int intNum;
  int *iptr=&intNum;
  cout << "�п�JintNum���ȡG";
  cin >> intNum;
  cout << "�ܼ�intNum����}:" << &intNum << "\t�ܼ�intNum����=" << intNum << endl;
  cout << "����iptr���V��}:" << iptr << "\t�̧}���� *iptr=" << *iptr << endl;
 	return 0;
}

