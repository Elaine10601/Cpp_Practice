//filename :7-12
#include <iostream>
using namespace std;
void hanoi(int,char,char,char);

int main()
{
    int n;
    cout << "輸入盤子數量: ";
	cin >> n;
	hanoi (n,'A','C','B');
 	return 0;
}

void hanoi(int n,char fromPeg,char toPeg,char auxPeg)
{
  if ( n == 1 )
	cout << "將 1 號盤子 從 " << fromPeg << "木樁 搬到 " << toPeg << "木樁" << endl;	
  else
   {
	hanoi(n-1,fromPeg,auxPeg,toPeg);
	cout << "將 " << n << " 號盤子 從 " << fromPeg << "木樁 搬到 " << toPeg << "木樁" << endl;
	hanoi(n-1,auxPeg,toPeg,fromPeg);
   }
}
