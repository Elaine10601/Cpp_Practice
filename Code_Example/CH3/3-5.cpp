//filename :3-5
#include <iostream>
using namespace std;
int main()
{
	const double PI=3.141592654;  //¶ê©P²v 
    float r=5;                   //¥b®|
    
    cout <<"PI=" << PI << endl;
    cout <<"sizeof(PI)=" << sizeof(PI) << endl << endl;
    
    cout <<"r=" << r << endl;
    cout <<"sizeof(r)=" << sizeof(r) << endl;

	cout <<"¥b®|="<< r << endl << "¶ê©Pªø = " << 2*PI*r << endl;
 	return 0;
}

