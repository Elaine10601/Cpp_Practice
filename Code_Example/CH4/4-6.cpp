//filename :4-6
#include <iostream>
using namespace std;
int main()
{
    int feet,inches;
    float height;    
    cout << "請輸入英呎:";
    cin >> feet;
    cout << "請輸入英吋:";
    cin >> inches;
    height=(feet*12+inches)*2.54;
    cout <<"身高： " << height << " cm\n";

 	return 0;
}

