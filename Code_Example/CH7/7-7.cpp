//filename:7-7
#include <iostream>
using namespace std;
void addNum(int,int);
int main()
{
	int x=3, y=21;
  	cout << "呼叫前，main()=> x=" << x << " 位址=" << &x << ", y=" << y << " 位址=" << &y << endl << endl; 
  	addNum(x,y);
  	cout << "呼叫後，main()=> x=" << x << " 位址=" << &x << ", y=" << y << " 位址=" << &y << endl << endl;

 	return 0;
}
void addNum(int a,int b)
{
 a++;		
 b++; 	
 cout << "函式addNum() ==> a=" << a << " 位址=" << &a << ", b=" << b << " 位址=" << &b << endl << endl;
}

