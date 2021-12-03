//filename :7-5 
#include <iostream>
using namespace std;

float rectangle(float,float);

int main()
{
   	float l,w,a;
    cout << "矩形的寬度：";
    cin >> w; 
    cout << "矩形的長度：";
    cin >> l;   
    a=rectangle(w,l);
    cout << "矩形面積：" << a << endl;

    return 0;
}

float rectangle(float width,float length)
{
    float area;
    area=width*length;
    return area;
}
