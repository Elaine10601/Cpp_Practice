#include<iostream>
using namespace std;
int main()
{
	int len;
	char a[20];
	cin.getline(a,20);
	for (int i=0; i<20; i++)
	{
		if (a[i]=='\0')
		{
			break;
		}
		len = i;
	}
	for (int i=len; i>=0; i--)
	{
		cout << a[i];
	}
	return 0;
}



//字串物件
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	getline(cin,str1);
	for (int i=str1.length()-1; i>=0; i--)
	{
		cout << str1[i];
	}
	return 0;
}
