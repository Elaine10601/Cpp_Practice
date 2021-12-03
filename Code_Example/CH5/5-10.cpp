//filename :5-10
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,num,sum=0;
    cout << "璶璸衡或计计㎝";
    cin >> num;
    cout << "1~100ぇい" << num << "计Τ";
    for(i=1;i<=100;i++)
    {
       if (i%num!=0)
         continue;
       cout << setw(4) << i ;
       sum+=i;
    }
    cout << endl << num << "计㎝" << sum;

 	return 0;
}

