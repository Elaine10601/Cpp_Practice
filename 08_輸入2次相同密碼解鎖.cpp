#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
	
	cout <<"請輸入密碼(1/2) : ";
	getline(cin,str1);
	cout <<"請輸入密碼(2/2) : ";
	getline(cin,str2);
	
	cout <<"\n字串Str_1 的內容:" <<str1;
	cout <<"\n字串Str_2 的內容:" <<str2;
	
	
	if (str1.length()!=str2.length())
	{
		cout << "\n\n字串不相等...\n解鎖失敗";
	}
	else
	{
		for(int i=0;i<str1.length();i++)
		{
			if(str1[i]!=str2[i])
			{
				cout << "\n\n字串不相等...\n解鎖失敗";
				break;
			}
			if(i==str1.length()-1)
			{
				cout << "\n\n字串相等，成功解鎖！";
			}
		}
	}
	
	
	return 0;
}
