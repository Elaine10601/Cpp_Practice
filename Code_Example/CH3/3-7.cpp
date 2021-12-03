//filename:3-7 
#include <iostream>
using namespace std;
int main()
{
    char cAlert='\a';
    char cDoubleQuote ='\"';
    char cSingleQuote ='\'';
    char cBackslash='\\';
    
    int iAlert='\a';
    int iDoubleQuote ='\"';
    int iSingleQuote ='\'';
    int iBackslash='\\';
    
	cout << cAlert << "的ASCII碼為：" << iAlert << endl;
	cout << cDoubleQuote << "的ASCII碼為：" << iDoubleQuote << endl;
	cout << cSingleQuote << "的ASCII碼為：" << iSingleQuote << endl;
	cout << cBackslash << "的ASCII碼為：" << iBackslash << endl;    

 	return 0;
}

