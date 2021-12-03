//filename :7-11 
#include <iostream>
using namespace std;
double recFactorial(int);
double norFactorial(int);

int main()
{
	int n;
	cout << "½Ð¿é¤J¶¥­¼¼Æn=";
	cin >> n;	
	cout << "»¼°j¨ç¦¡©I¥s:" << n << "! = " << recFactorial(n) << endl;	
	cout << "¤@¯ë¨ç¦¡©I¥s: " << n << "! = " << norFactorial(n) << endl;
 	return 0;
}

double recFactorial(int n)  //»¼°j¨ç¦¡
{	
	if(n==0)
		return 1;	
  	else  	
  		return n*recFactorial(n-1);
}

double norFactorial(int n)  //¤@¯ë¨ç¦¡
{
	int i;
    double p=1;
 	for(i=1; i<=n; i++)
  		p=p*i;
    return p;	
}
