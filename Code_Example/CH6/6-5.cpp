//filename :6-5
#include <iostream>
using namespace std;
int main()
{
    char str1[20], str2[20];
   
    cout << "以 cin.getline() 讀取字串，What is your name ?";
    cin.getline(str1,20);
    cout << str1 << endl;
    cout << "str1使用的記憶體的容量" << sizeof(str1) << " bytes." << endl ; 
    cout << "---------------------------------------" << endl ; 
    cout << "以 cin 讀取字串，What is your name ? ";
    cin >> str2;
    cout << str2 << endl;
    cout << "str2使用的記憶體的容量" << sizeof(str2) << " bytes." << endl ; 

 	return 0;
}

