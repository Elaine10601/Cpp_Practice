//filename:3-11
#include <iostream>
using namespace std;
int main()
{
    int iDivisor,iDividend;
    iDivisor=2;    //除數 
    iDividend=9;   //被除數
    cout << "iDividend = "<< iDividend <<'\t'<< "iDivisor = " << iDivisor << "\n\n";
    cout << "iDividend / iDivisor = " << iDividend/iDivisor << endl;
    cout << "sizeof(iDividend/iDivisor) = " << sizeof(iDividend/iDivisor) << "\n\n";
    
    cout << "(double)iDividend/iDivisor = " << (double)iDividend/iDivisor << endl;
    cout << "sizeof((double)iDividend/iDivisor) = " << sizeof((double)iDividend/iDivisor) << "\n\n";
    
    cout << "iDividend/(double)iDivisor = " << iDividend/(double)iDivisor << endl;
    cout << "sizeof(iDividend/(double)iDivisor) = " << sizeof(iDividend/(double)iDivisor) << endl;

 	return 0;
}

