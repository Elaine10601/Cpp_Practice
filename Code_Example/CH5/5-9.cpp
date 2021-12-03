//filename :5-9
#include <iostream>
using namespace std;
int main()
{
     int password, count;
     
	 for (count=1; count <= 3; count++)
	 {
	     cout << "第" << count << "次輸入密碼:";
	     cin >> password; 

		 if ( password == 123 )
			 break;
		 else 
			 if(count!=3)
                cout << "密碼錯誤，請重新輸入..." << endl;
	 }
	 
	 if ( count > 3)
		 cout << "連續 3 次輸入錯誤密碼，無法登入..." << endl;
	 else
         cout << "歡迎進入本系統..." << endl;

 	return 0;
}

