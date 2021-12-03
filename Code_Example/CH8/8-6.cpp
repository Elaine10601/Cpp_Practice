//filename :8-6 
#include <iostream>
#include <iomanip>
using namespace std;
struct airPollution
{
	double yesterday;
	double today;
	double avg;
} pm25;

double calAvg(struct airPollution *);
int main()
{
	cout << "The PM 2.5 of yesterday:";
	cin >> pm25.yesterday;
	cout << "The PM 2.5 of today:";
	cin >> pm25.today;
	
	cout << endl;
	cout  << setw(10) << "yesterday" << setw(10) << "today" << setw(10) << "average" << endl;
	calAvg(&pm25);
	cout << "----------------------------------" << endl;
	cout << setw(10) << pm25.yesterday << setw(10) << pm25.today << setw(10) << pm25.avg << endl; 
 	return 0;
}

double calAvg(struct airPollution *ptr)
{
	ptr->avg=(ptr->yesterday+ptr->today)/2;
    return ptr->avg;
}
