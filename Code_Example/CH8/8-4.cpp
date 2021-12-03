//filename :8-4 
#include <iostream>
using namespace std;
struct BMI_data 
{
    float height;
    float weight;
} info;

void BMI(struct BMI_data);

int main()
{
   cout << "Input your height(cm):";
   cin >> info.height;
   cout << "Input your weight(kg):";
   cin >> info.weight;
   BMI(info);
   return 0;
}

void BMI(struct BMI_data temp)
{
	double h,result;
	h=temp.	height/100;
	result=temp.weight/(h*h);
	cout << "BMI=" << result << endl;	
}

