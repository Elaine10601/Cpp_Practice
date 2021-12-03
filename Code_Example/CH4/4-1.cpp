//filename :4-1
#include <iostream>
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
    cout << "�A��BMI��" << BMI << endl;

 	return 0;
}

