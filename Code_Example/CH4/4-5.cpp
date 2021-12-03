//filename :4-5
#include <iostream>
using namespace std;
int main()
{
    int a=12,b=3;    
    cout << a <<" AND " << b <<" = " << (a&b) << endl;
    cout << a <<" OR " << b <<" = " << (a|b) << endl;
    cout << a <<" XOR " << b <<" = " << (a^b) << endl;
    cout << "NOT " << b << " = " << (~b) << endl;
    cout << a << " >> 2 = " << (a>>2) << endl;
    cout << b << " << 3 = " << (b<<3) << endl;

 	return 0;
}

