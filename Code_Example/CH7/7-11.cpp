//filename :7-11 
#include <iostream>
using namespace std;
double recFactorial(int);
double norFactorial(int);

int main()
{
	int n;
	cout << "�п�J������n=";
	cin >> n;	
	cout << "���j�禡�I�s:" << n << "! = " << recFactorial(n) << endl;	
	cout << "�@��禡�I�s: " << n << "! = " << norFactorial(n) << endl;
 	return 0;
}

double recFactorial(int n)  //���j�禡
{	
	if(n==0)
		return 1;	
  	else  	
  		return n*recFactorial(n-1);
}

double norFactorial(int n)  //�@��禡
{
	int i;
    double p=1;
 	for(i=1; i<=n; i++)
  		p=p*i;
    return p;	
}
