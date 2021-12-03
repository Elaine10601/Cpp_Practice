//filename :7-15
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int gotoxy(HANDLE hOut, int x, int y)
 {
  COORD pos;
  pos.X = x;
  pos.Y = y;
  return SetConsoleCursorPosition(hOut, pos);
 }
int judge(int TicTacToe[][3],int pT)
 {
  int p;
   for (p=0;p<3;p++)
     if (TicTacToe[p][0]!=-1)
       if (TicTacToe[p][0]==TicTacToe[p][1] && TicTacToe[p][1]==TicTacToe[p][2])
        {
         cout << endl << "��" << TicTacToe[p][0]+1 << "�ӤHĹ�F" << endl;
         return 1;
        }
        
   for (p=0;p<3;p++)
     if (TicTacToe[0][p]!=-1)
       if (TicTacToe[0][p]==TicTacToe[1][p] && TicTacToe[1][p]==TicTacToe[2][p])
        {
         cout << endl << "��" << TicTacToe[0][p]+1 << "�ӤHĹ�F" << endl;
         return 1;
        }
        
   if (TicTacToe[0][0]!=-1)
     if (TicTacToe[0][0]==TicTacToe[1][1] && TicTacToe[1][1]==TicTacToe[2][2])
      {
       cout << endl << "��" << TicTacToe[0][0]+1 << "�ӤHĹ�F" << endl;
       return 1;
      }
      
    if (TicTacToe[0][2]!=-1)
     if (TicTacToe[0][2]==TicTacToe[1][1] && TicTacToe[1][1]==TicTacToe[2][0])
       {
        cout << endl << "��" << TicTacToe[0][2]+1 << "�ӤHĹ�F" << endl;
        return 1;
       }
       
    if (pT==10)
    {
     cout << endl <<"����" << endl;
     return 1;
    }
    
  return 0;  
 }

void draw_TicTacToe(int TicTacToe[][3],char ox[2])
 {
   int j,k;
   system("cls");
   cout << "���ʴ�СG��V�� �U�l�GEnter ��1�ӤH�GO�A��2�ӤH�GX ���}�GEsc" << endl << endl;
   for (j=0;j<5;j++)
    {                    
      cout << " ";
      for (k=0;k<5;k++)
       {
         if (j%2==0 && k%2==0) //��O,X��ƪ���m
          {
            if (TicTacToe[j/2][k/2]!=-1) //��1,3,5�C��O,X ���
              cout << ox[TicTacToe[j/2][k/2]];
            else
              cout << " ";
          }
         else if (j%2!=0) //��2,4�C
           cout << "-";
         else if (k%2!=0) //��2,4��
           cout << "|";
       }
      cout << endl;
    }
 }

int main()
{
  const int WIDTH=6, HEIGHT=7;
  int y=4, x=3,playTimes=1 ,over=0;
  int key,i;
  int pos[3][3]={{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}}; 
  char symbol[2]={'O','X'};
  HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

  cout << "���ʴ�СG��V�� �U�l�GEnter ��1�ӤH�GO�A��2�ӤH�GX ���}�GEsc" << endl << endl;
  cout << "  | |" << endl;
  cout << " -----" << endl;
  cout << "  | |" << endl;
  cout << " -----" << endl;
  cout << "  | |" << endl;

  while(1)
   {
    for (i=0;i<2;i++)
     {
      while(key!=13)
      {       
       gotoxy(hOut,10,2);
       cout << "�{�b�����"  << i+1 << "�ӤH�U" << symbol[i];
       gotoxy(hOut,x,y);
       key=getch();
       if(key==75)      //��(��V��A��P)
        x=x==1?WIDTH-1:x-2;
       else if(key==77)  //�k
        x = ++x==WIDTH?1:x+1;
       else if(key==72)  //�W
        y=y==2?HEIGHT-1:y-2; //�Ĥ@��w�Ω��X��T
       else if(key==80)  //�U
        y = ++y==HEIGHT?2:y+1;
       else if(key==13)  //Enter
        {
          if (pos[(y-2)/2][x/2]!=-1)
           {
             gotoxy(hOut,5,10);
             cout << "����m�w�g�U�L�F,���s��J!\a" << endl;
             i--;
             break;
           }
          else
           {
             pos[(y-2)/2][x/2]=i;
             playTimes++;  
           } 
        }
       else if(key==27)  //ESC
        return 0;
     
       draw_TicTacToe(pos,symbol);
      }  //end of read key_code
     key=0;
     over=judge(pos,playTimes);
     if (over==1) break;
     }//end of for
    if (over==1) break;    
   } //end of while
    CloseHandle(hOut);
    key=getch();
 	return 0;
}
