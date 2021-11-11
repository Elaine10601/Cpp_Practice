/* 1  2  3...
  11 12 13...*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for(int i=1;i<=100;i=i+10)
	{
		for(int j=0;j<=9;j++)
		{
			cout<<setw(4)<<i+j;
		}
		cout<<"\n";
	}
	return 0;
}


/* 1 11 21...
   2 12 22...*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for(int i=1;i<=10;i++)
	{
		for(int j=0;j<=9;j++)
		{
			cout<<setw(4)<<i+j*10;
		}
		cout<<"\n";
	}
	return 0;
}
