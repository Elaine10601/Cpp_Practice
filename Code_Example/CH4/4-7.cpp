//filename :4-7
#include <iostream>
using namespace std;
int main()
{
    int f,i;
    float h;    
    cout << "�п�J����(cm):";
    cin >> h;
    f=h/(12*2.54);    
    i=(h-(f*12*2.54))/2.54+0.5;
    cout << "�����G"<< f << " �` " << i << " �T\n";  

 	return 0;
}

