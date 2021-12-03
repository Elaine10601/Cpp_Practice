//filename:3-12 
#include <iostream>
using namespace std;
int main()
{
	unsigned short val1,val2,valMax,valMin;
    valMax=65535;
    valMin=0;
    
    cout << "valMax = " << valMax << endl;
    
    val1 = valMax + 1;
    cout << "valMax + 1 = " << val1 << endl;
    
	val1 = valMax + 2;
    cout << "valMax + 2 = " << val1 << endl << endl;
    
    cout << "valMin = " << valMin << endl;
    
    val2 = valMin - 1;
    cout << "valMin - 1 = " << val2 << endl;
    
    val2 = valMin - 2;
    cout << "valMin - 2 = " << val2;

 	return 0;
}

