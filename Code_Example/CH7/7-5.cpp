//filename :7-5 
#include <iostream>
using namespace std;

float rectangle(float,float);

int main()
{
   	float l,w,a;
    cout << "�x�Ϊ��e�סG";
    cin >> w; 
    cout << "�x�Ϊ����סG";
    cin >> l;   
    a=rectangle(w,l);
    cout << "�x�έ��n�G" << a << endl;

    return 0;
}

float rectangle(float width,float length)
{
    float area;
    area=width*length;
    return area;
}
