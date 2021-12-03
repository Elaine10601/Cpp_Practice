//filename :5-12
#include <iostream>
using namespace std;
int main()
{
    int i,num,count=0;
    cout << "請輸入一個正整數：";
    cin >> num;
    cout << "下列為" << num << "的因數：" << endl;
    i=1;
    while(i<=num)
    {
     if (num%i==0)
       {
         cout << i;
         count++;
         if (i!=num)
           cout << ",";
       }
     i++; 
    }
    cout << "\n總共有" << count << "個\n";

 	return 0;
}

