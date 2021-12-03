//filename:3-9 
#include <iostream>
using namespace std;
int main()
{
    int intValue=19;
    double doubleValue;
    doubleValue=intValue;
    
    cout << "intValue = " << intValue << endl;
    cout << "doubleValue = " << doubleValue << endl;
    cout << "sizeof(intValue) = " << sizeof(intValue) << endl;
    cout << "sizeof(doubleValue) = " << sizeof(doubleValue) << endl << endl;
    
    intValue=20.00;
    doubleValue=5;
    cout << "intValue=" << intValue << endl;    
    cout << "doubleValue=" <<doubleValue << endl;
    cout << "sizeof(intValue) = " << sizeof(intValue) << endl;
    cout << "sizeof(doubleValue) = " << sizeof(doubleValue) << endl;
 	return 0;
}

