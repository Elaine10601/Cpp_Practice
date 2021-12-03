//filename :8-2 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct profile
{
    string name;
    double height;
    double weight;
    double BMI;
} student[3];

int main()
{
	int i;
	for (i=0;i<3;i++)
	{
	  cout << "student" << i << "'s name:";
	  cin >> student[i].name;
	  cout << "student" << i << "'s height:";
	  cin >> student[i].height;
	  cout << "student" << i << "'s weight:";
	  cin >> student[i].weight;
	  student[i].BMI=student[i].weight/(student[i].height*student[i].height/10000);
    }
    
	cout << endl << setw(10) << "Name" << setw(10) << "height" << setw(10) << "weight"  << setw(10) << "BMI" << endl;
	cout << "--------------------------------------------------" << endl;
	for (i=0;i<3;i++)
	  cout << setw(10) << student[i].name << setw(10) << student[i].height << setw(10) << student[i].weight << setw(10) << student[i].BMI << endl;
 	return 0;
}

