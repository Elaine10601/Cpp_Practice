//filename:3-10
#include <iostream>
using namespace std;
int main()
{
    int iVal1,iVal2;
    double dVal1=2.71828;
    double dVal2=2.12345;
    iVal1=dVal1;
    iVal2=dVal2;
    cout << "dVal1 = " << dVal1 << endl;
    cout << "iVal1 = " << iVal1 << endl;
    cout << "dVal2 = " << dVal2 << endl;
    cout << "iVal2 = " << iVal2 << endl;
        
    cout << "sizeof(iVal1) = " << sizeof(iVal1) << endl;
    cout << "sizeof(iVal2) = " << sizeof(iVal2) << endl;
    cout << "sizeof(dVal1) = " << sizeof(dVal1) << endl;
    cout << "sizeof(dVal2) = " << sizeof(dVal2) << endl;

 	return 0;
}

