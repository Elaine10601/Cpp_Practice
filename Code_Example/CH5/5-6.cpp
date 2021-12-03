//filename :5-6
#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "請輸入一個星期的第幾天：";
    cin >> day;

    switch (day){
        case 1:
             cout << "星期日\n";  
             break;   
        case 2:
             cout << "星期一\n";  
             break;
        case 3:
             cout << "星期二\n";   
             break;
        case 4:
             cout << "星期三\n";  
             break;
        case 5:
             cout << "星期四\n";  
             break;
        case 6:
             cout << "星期五\n";  
             break;
        case 7:
             cout << "星期六\n";  
             break;

        default:
             cout << "輸入錯誤!\n";
    }

 	return 0;
}

