//filename :6-5
#include <iostream>
using namespace std;
int main()
{
    char str1[20], str2[20];
   
    cout << "�H cin.getline() Ū���r��AWhat is your name ?";
    cin.getline(str1,20);
    cout << str1 << endl;
    cout << "str1�ϥΪ��O���骺�e�q" << sizeof(str1) << " bytes." << endl ; 
    cout << "---------------------------------------" << endl ; 
    cout << "�H cin Ū���r��AWhat is your name ? ";
    cin >> str2;
    cout << str2 << endl;
    cout << "str2�ϥΪ��O���骺�e�q" << sizeof(str2) << " bytes." << endl ; 

 	return 0;
}

