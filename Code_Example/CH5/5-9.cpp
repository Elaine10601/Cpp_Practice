//filename :5-9
#include <iostream>
using namespace std;
int main()
{
     int password, count;
     
	 for (count=1; count <= 3; count++)
	 {
	     cout << "��" << count << "����J�K�X:";
	     cin >> password; 

		 if ( password == 123 )
			 break;
		 else 
			 if(count!=3)
                cout << "�K�X���~�A�Э��s��J..." << endl;
	 }
	 
	 if ( count > 3)
		 cout << "�s�� 3 ����J���~�K�X�A�L�k�n�J..." << endl;
	 else
         cout << "�w��i�J���t��..." << endl;

 	return 0;
}

