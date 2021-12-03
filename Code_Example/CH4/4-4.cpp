//filename :4-4
#include <iostream>
using namespace std;
int main()
{
    int eng_score=70,math_score=85;
    int eng_range,math_range; 
	   
    eng_range=eng_score>=60 && eng_score<=80;
    math_range=math_score>=60 && math_score<=80; 
	   
    cout << "英文成績：" << eng_score << endl;
    cout << "判斷英文成績是否介於60~80分之間：" << eng_range << endl << endl;
    cout << "數學成績：" << math_score << endl;
    cout << "判斷數學成績是否介於60~80分之間：" << math_range << endl;

 	return 0;
}

