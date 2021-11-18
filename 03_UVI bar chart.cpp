#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[5] = { 0,0,0,0,0 };
	cout << "輸入星期 1 的紫外線指數：";
	cin >> a[0];
	int b = a[0], c = a[0], d = a[0];
	for (int x = 1; x < 5; x++) {
		cout << "輸入星期 " << x+1 << " 的紫外線指數：";
		cin >> a[x];
		if (a[x] > b)
			b = a[x];
		if (a[x] < b)
			b = a[x];
		d = d + a[x];
	}
	cout << "最大值：" << b << "\n最小值：" << c << "\n平均值：" << d/5 <<"\n";  
	
	for (int x = b; x > 0; x--) {
		for (int y = 0; y < 5; y++) {
			if ((x - a[y]) <= 0)
				cout << setw(3) << "*";
			else
				cout << setw(3) << " ";
		}
		cout << endl;

	}
	cout << "=================="<< endl;
	for (int x = 0; x < 5; x++){
		cout << setw(3) << a[x];
	}
	
	return 0;
}
