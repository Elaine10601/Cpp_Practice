//filename :4-7
#include <iostream>
using namespace std;
int main()
{
    int f,i;
    float h;    
    cout << "請輸入身高(cm):";
    cin >> h;
    f=h/(12*2.54);    
    i=(h-(f*12*2.54))/2.54+0.5;
    cout << "身高："<< f << " 呎 " << i << " 吋\n";  

 	return 0;
}

