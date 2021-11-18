#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << "XX股價的紀錄\n\n";
	
	int a[5][4]={0};
	for (int i=0;i<5)
	{
		cout << "星期" << i+1 <<"\n"; 
		for (int j=0;j<4;j++)
		{
			if (j=0) cout << "開盤價" ;
			if (j=1) cout << "最高價" ;
			if (j=2) cout << "最低價" ;
			if (j=3) cout << "收盤價" ;
			cin >> a[i][j];
		}
	}
	cout << "\t開盤價\t最高價\t最低價\t收盤價";
	for (int i=0;i<5)
	{
		cout << "星期" << i+1 <<"\t"; 
		for (int j=0;j<4;j++)
		{
			cout << a[i][j] << "\t";
		}
	}
	
	return 0;
}

