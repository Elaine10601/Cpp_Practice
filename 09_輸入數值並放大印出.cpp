#include<iostream>
#include<string>
using namespace std;
int main()
{
	int number[10][5] = { {6,9,9,9,6},	//0
						{6,10,2,2,15},	//1
						{14,1,6,8,15},	//2
						{14,1,14,1,14},	//3
						{2,6,10,15,2},	//4
						{15,8,6,1,14},	//5
						{7,8,14,9,6},	//6
						{15,1,2,4,4},	//7
						{6,9,6,9,6},	//8
						{6,9,7,1,14},	//9
						};
	int b = 0, c;
	string a;
	
	cout << "輸入要出現的數字：";
	cin >> a;

	
	for (int i = 0; i < 5; i++)
	{
		cout << "　　";
		for (int j = 0; j <= a.length() - 1; j++)
		{
			switch (a[j])
			{
			case '0':
				b = 0;
				break;
			case '1':
				b = 1;
				break;
			case '2':
				b = 2;
				break;
			case '3':
				b = 3;
				break;
			case '4':
				b = 4;
				break;
			case '5':
				b = 5;
				break;
			case '6':
				b = 6;
				break;
			case '7':
				b = 7;
				break;
			case '8':
				b = 8;
				break;
			case '9':
				b = 9;
				break;
			};
			c = number[b][i];
			for (int k = 8; k >= 1; k /= 2)
			{
				if (c / k == 1)
				{
					cout << "＊";
					c -= k;
				}
				else
				{
					cout << "　";
				}
			}
			cout << "　";
		}
		cout << '\n';
	}
	return 0;
}
