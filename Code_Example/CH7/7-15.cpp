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
         cout << endl << "第" << TicTacToe[p][0]+1 << "個人贏了" << endl;
         return 1;
        }
        
   for (p=0;p<3;p++)
     if (TicTacToe[0][p]!=-1)
       if (TicTacToe[0][p]==TicTacToe[1][p] && TicTacToe[1][p]==TicTacToe[2][p])
        {
         cout << endl << "第" << TicTacToe[0][p]+1 << "個人贏了" << endl;
         return 1;
        }
        
   if (TicTacToe[0][0]!=-1)
     if (TicTacToe[0][0]==TicTacToe[1][1] && TicTacToe[1][1]==TicTacToe[2][2])
      {
       cout << endl << "第" << TicTacToe[0][0]+1 << "個人贏了" << endl;
       return 1;
      }
      
    if (TicTacToe[0][2]!=-1)
     if (TicTacToe[0][2]==TicTacToe[1][1] && TicTacToe[1][1]==TicTacToe[2][0])
       {
        cout << endl << "第" << TicTacToe[0][2]+1 << "個人贏了" << endl;
        return 1;
       }
       
    if (pT==10)
    {
     cout << endl <<"平手" << endl;
     return 1;
    }
    
  return 0;  
 }

void draw_TicTacToe(int TicTacToe[][3],char ox[2])
 {
   int j,k;
   system("cls");
   cout << "移動游標：方向鍵 下子：Enter 第1個人：O，第2個人：X 離開：Esc" << endl << endl;
   for (j=0;j<5;j++)
    {                    
      cout << " ";
      for (k=0;k<5;k++)
       {
         if (j%2==0 && k%2==0) //填O,X資料的位置
          {
            if (TicTacToe[j/2][k/2]!=-1) //第1,3,5列為O,X 資料
              cout << ox[TicTacToe[j/2][k/2]];
            else
              cout << " ";
          }
         else if (j%2!=0) //第2,4列
           cout << "-";
         else if (k%2!=0) //第2,4行
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

  cout << "移動游標：方向鍵 下子：Enter 第1個人：O，第2個人：X 離開：Esc" << endl << endl;
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
       cout << "現在輪到第"  << i+1 << "個人下" << symbol[i];
       gotoxy(hOut,x,y);
       key=getch();
       if(key==75)      //左(方向鍵，後同)
        x=x==1?WIDTH-1:x-2;
       else if(key==77)  //右
        x = ++x==WIDTH?1:x+1;
       else if(key==72)  //上
        y=y==2?HEIGHT-1:y-2; //第一行已用於輸出資訊
       else if(key==80)  //下
        y = ++y==HEIGHT?2:y+1;
       else if(key==13)  //Enter
        {
          if (pos[(y-2)/2][x/2]!=-1)
           {
             gotoxy(hOut,5,10);
             cout << "本位置已經下過了,重新輸入!\a" << endl;
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
