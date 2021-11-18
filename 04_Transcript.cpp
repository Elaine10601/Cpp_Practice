#include<iostream>
using namespace std;
int main()
{
	int x[10],c=0;
	float b=0;
	for (int a=0;a<10;a++)
	{
		cout<<"請輸入第"<<a+1<<"位學生的成績:";
		cin>>x[a];
		b=b+x[a];
	}
	cout<<"總成績:"<<b<<"\n平均分數:"<<b/10;
	for (int a=0;a<10;a++)
	{
		if (x[a]<(b/10))
		{
			c=c+1;
		}
	}
	cout<<"\n有"<<c<<"人成績低於平均分數\n總分="<<b<<" , 平均="<< b/10;
	cout<<"\n----------------------------";
	cout<<"\n人數分佈圖如下:"; 
	cout<<"\n----------------------------";
	cout<<"\n分數級距\t人數";
	cout<<"\n----------------------------\n";
	
	for (int a=0;a<10;a++)
	{
		if (a<9)
		{
			cout<<a*10<<"~"<<(a+1)*10-1<<"\t\t";
		}
		else
		{
			cout<<a*10<<"~"<<(a+1)*10<<"\t\t";
		}
		
		for (int e=0;e<10;e++)
		{
			if ((x[e]<((a+1)*10))&&(x[e]>=((a)*10)))
			{
				cout<<"*";
			}
			if (a==9 && x[e]==100)
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}
