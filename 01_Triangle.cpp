#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"input";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i-1;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=(n-i)*2+1;k++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"input";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=i-1;j>=1;j--)
		{
			cout<<" ";
		}
		for(int k=1;k<=(n-i+1)*2-1;k++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"input";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		for(int j=0;j<=i-2;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=n-i+1;k++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"input";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		for(int j=0;j<=n-i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"input";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		for(int j=0;j<=n-i-1;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"input";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=n-i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
