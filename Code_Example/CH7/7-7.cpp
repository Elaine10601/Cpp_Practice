//filename:7-7
#include <iostream>
using namespace std;
void addNum(int,int);
int main()
{
	int x=3, y=21;
  	cout << "�I�s�e�Amain()=> x=" << x << " ��}=" << &x << ", y=" << y << " ��}=" << &y << endl << endl; 
  	addNum(x,y);
  	cout << "�I�s��Amain()=> x=" << x << " ��}=" << &x << ", y=" << y << " ��}=" << &y << endl << endl;

 	return 0;
}
void addNum(int a,int b)
{
 a++;		
 b++; 	
 cout << "�禡addNum() ==> a=" << a << " ��}=" << &a << ", b=" << b << " ��}=" << &b << endl << endl;
}

