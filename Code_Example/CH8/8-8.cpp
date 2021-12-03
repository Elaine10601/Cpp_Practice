//filename :8-8
#include <iostream>
using namespace std;
class Cpower
{
  private:
	double ohm;
	double current;
  public:
    void inputData(void);
	double calPower(void);
};

void Cpower::inputData(void)
{
	cout << "ohm = ";
	cin >> ohm;
	cout << "current = ";
	cin >> current;
}
	
double Cpower::calPower(void)
{
	return current*current*ohm;
}

int main()
{
	Cpower resistor;
	resistor.inputData();
	cout << "P = " << resistor.calPower() << " W" << endl;
 	return 0;
}
