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
        cout << "(" << counter << ").�п�J 1~100 ��������(��J0�����C��)�G";
        cin >> ans;
        if (ans>100 || ans<0)
         {
           cout << "�W�X�d��(1~100)�F��!" << endl;
           continue;
         }
        if (ans==0) break;
        if (ans>randNum) cout << "\t�ƭȭn�A�p�@�I��!" << endl;
        if (ans<randNum) cout << "\t�ƭȭn�A�j�@�I��!" << endl;            
       }
       
      if (ans!=0)
         cout << "Bingo! �A�u��F " << counter << " ���N�q��F�C" << endl;
      else
         cout << "���T���׬� " << randNum << endl;

 	return 0;
}

