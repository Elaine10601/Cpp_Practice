//filename :5-16 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
     int randNum,ans=0,counter=0;
     srand(time(NULL));
     randNum=(rand()%100)+1;

     while(randNum!=ans)
       {
        counter++;
        cout << "(" << counter << ").請輸入 1~100 之間的數(輸入0結束遊戲)：";
        cin >> ans;
        if (ans>100 || ans<0)
         {
           cout << "超出範圍(1~100)了喔!" << endl;
           continue;
         }
        if (ans==0) break;
        if (ans>randNum) cout << "\t數值要再小一點喔!" << endl;
        if (ans<randNum) cout << "\t數值要再大一點喔!" << endl;            
       }
       
      if (ans!=0)
         cout << "Bingo! 你只花了 " << counter << " 次就猜對了。" << endl;
      else
         cout << "正確答案為 " << randNum << endl;

 	return 0;
}

