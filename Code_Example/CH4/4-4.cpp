//filename :4-4
#include <iostream>
using namespace std;
int main()
{
    int eng_score=70,math_score=85;
    int eng_range,math_range; 
	   
    eng_range=eng_score>=60 && eng_score<=80;
    math_range=math_score>=60 && math_score<=80; 
	   
    cout << "�^�妨�Z�G" << eng_score << endl;
    cout << "�P�_�^�妨�Z�O�_����60~80�������G" << eng_range << endl << endl;
    cout << "�ƾǦ��Z�G" << math_score << endl;
    cout << "�P�_�ƾǦ��Z�O�_����60~80�������G" << math_range << endl;

 	return 0;
}

