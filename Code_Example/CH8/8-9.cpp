//filename :8-9
#include <iostream>
using namespace std;
class Ccon_test
{
  private:
	double radius;

  public:
    Ccon_test(double r)
    {
    	radius=r;
    	cout << " 建構子設定初始值" << endl;
	}

	void showData()
	{
		cout << "radius = " << radius << endl;
	} 
};

int main()
{
	Ccon_test circle(6.19);	
	circle.showData();
 	return 0;
}
