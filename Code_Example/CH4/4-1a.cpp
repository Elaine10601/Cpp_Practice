//filename :4-1a
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float BMI,w,h;
    cout << "請輸入身高(cm)：";
    cin >> h;
    cout << "請輸入體重(kg)：";
    cin >> w; 
    h=h/100;   
    BMI=w/(h*h);
    cout << "你的BMI為" << setprecision(4) << BMI << endl;
 	return 0;
}
