//filename :5-2
#include <iostream>
using namespace std;
int main()
{
    int adults,children,amount;
    cout << "請輸入消費人數\n";
    cout << "大人:";
    cin >> adults;
    cout << "小孩:";
    cin >> children;
    amount=adults*250+children*150;
    cout << "消費金額：" << amount << endl;
    if (amount>=1000)
       amount=amount*0.9;
    cout << "應付金額：" << amount << endl; 

 	return 0;
}

