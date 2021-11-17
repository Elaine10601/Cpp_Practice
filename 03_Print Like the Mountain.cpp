#include<iostream>
using namespace std;
int main()
{
	int a[5] = { 0,0,0,0,0 };
	cin >> a[0];
	int b = a[0];
	for (int x = 1; x < 5; x++) {
		cin >> a[x];
		if (a[x] > b)
			b = a[x];
	}
	
	for (int x = b; x > 0; x--) {
		for (int y = 0; y < 5; y++) {
			if ((x - a[y]) <= 0)
				cout << "＊";
			else
				cout << "　";
		}
		cout << endl;

	}
	
	
	return 0;
}
