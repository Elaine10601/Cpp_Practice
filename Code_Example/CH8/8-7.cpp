//filename :8-7
#include <iostream>
#include <string>
using namespace std;
class Cprofile
{
  private:
	string name;
	double weight;
	double height;
	double bmi;
	
  public:
    void keyinData()
    {
      cout << "input your name:";
      getline(cin,name);
      cout << "input your height(cm):";
      cin >> height;
      cout << "input your weight(kg):";
      cin >> weight;      
    }
    
	double calBMI()
	{
		cout << "name:" << name << endl;
		bmi=weight/(height*height/10000);
		return bmi;
	}
};

int main()
{
	Cprofile student;
	student.keyinData();
	cout << "--------------------------" << endl;
	cout << "BMI=" << student.calBMI() << endl;
 	return 0;
}

