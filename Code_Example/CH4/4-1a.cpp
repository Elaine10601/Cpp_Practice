//filename :4-1a
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float BMI,w,h;
    cout << "�п�J����(cm)�G";
    cin >> h;
    cout << "�п�J�魫(kg)�G";
    cin >> w; 
    h=h/100;   
    BMI=w/(h*h);
    cout << "�A��BMI��" << setprecision(4) << BMI << endl;
 	return 0;
}
