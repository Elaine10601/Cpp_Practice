//filename :5-2
#include <iostream>
using namespace std;
int main()
{
    int adults,children,amount;
    cout << "�п�J���O�H��\n";
    cout << "�j�H:";
    cin >> adults;
    cout << "�p��:";
    cin >> children;
    amount=adults*250+children*150;
    cout << "���O���B�G" << amount << endl;
    if (amount>=1000)
       amount=amount*0.9;
    cout << "���I���B�G" << amount << endl; 

 	return 0;
}

