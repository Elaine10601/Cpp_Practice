//filename:8-1 
#include <iostream>
#include <string>
using namespace std;

struct profile
{
    string name;
    float height;
    float weight;
} student;

int main()
{
   cout << "Input your name:";
   getline(cin,student.name);
   cout << "Input your height:";
   cin >> student.height;
   cout << "Input your weight:";
   cin >> student.weight;
   
   cout << endl;
   cout << "name�G" << student.name << endl;
   cout << "height�G" << student.height << endl;
   cout << "weight�G" << student.weight << endl;
   return 0;
}
