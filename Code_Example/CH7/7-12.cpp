//filename :7-12
#include <iostream>
using namespace std;
void hanoi(int,char,char,char);

int main()
{
    int n;
    cout << "��J�L�l�ƶq: ";
	cin >> n;
	hanoi (n,'A','C','B');
 	return 0;
}

void hanoi(int n,char fromPeg,char toPeg,char auxPeg)
{
  if ( n == 1 )
	cout << "�N 1 ���L�l �q " << fromPeg << "��� �h�� " << toPeg << "���" << endl;	
  else
   {
	hanoi(n-1,fromPeg,auxPeg,toPeg);
	cout << "�N " << n << " ���L�l �q " << fromPeg << "��� �h�� " << toPeg << "���" << endl;
	hanoi(n-1,auxPeg,toPeg,fromPeg);
   }
}
