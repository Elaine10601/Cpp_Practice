//filename:7-16
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <ctime>
#include "conio0.h"
using namespace std;
void printSymble(int ST[][10],int c,int r);
void printBack(void);
int main()
 {   
	const int WIDTH=22, HEIGHT=6;
	int symbolTable[2][10];
	int dealCards[10]={0}; 
	int match[2][10]={0};
	int row[2],col[2];
	int symNum; 
	int keyinNum=1; 
	int bingo=0,color;
	int i,j,k,key,x=4,y=4;
	
	srand((unsigned) time(NULL));
	for (i=0;i<2;i++)
    	for (j=0;j<10;j++)
    	{
      		symNum=rand()%10;
      		if (dealCards[symNum]<2)
        	{
        		dealCards[symNum]++;
        		symbolTable[i][j]=symNum;
        	}
      		else
        		j--;
    	}

   	cout << "移動方向鍵並按下Enter選牌，Esc離開程式" << endl << endl ;
  	cout << "   ";  
  
  	for (i=0;i<10;i++)
    	cout << setw(2) << i+1;
   	cout << endl ;
	
	textcolor(15);
  	for (i=0;i<2;i++) 
   	{
    	cout << " ";
		cout << i+1 << " ";
    	for (j=0;j<10;j++)
       		cout << "■" ;
     	cout << endl << endl ;
   	}

  	while(bingo<10)
   	{
    	row[0]=col[0]=row[1]=col[1]=-1;    
    
    	for (keyinNum=0;keyinNum<2;keyinNum++)
     	{
     		key=-1;
			 while(key!=13)
      		{       
       			gotoxy(x,y);
       			key=getch();
       			if(key==75)  
        			x=x==4?WIDTH:x-2;
       			else if(key==77) 
        			x = (++x)>WIDTH?4:x+1;
       			else if(key==72) 
        			y=y==4?HEIGHT:y-2; 
       			else if(key==80) 
        			y = ++y>HEIGHT?4:y+1;
       			else if(key==13) 
        		{
          			col[keyinNum]=x/2-2;
          			row[keyinNum]=y/3-1;
      				if (match[row[keyinNum]][col[keyinNum]]!=0 || (row[0]==row[1] && col[0]==col[1]))
       				{
        				cout << "位置(" << row[keyinNum] << "," << col[keyinNum] << ")已經輸入了或配對完成,重新輸入!\a" ;
        				keyinNum--;
        				continue;
       				}
        		}
       			else if(key==27) 
        		return 0;
			}
			
      		system("cls");
       		cout << "移動方向鍵並按下Enter選牌，Esc離開程式" << endl << endl ; 
      		cout << "   ";
      		for (i=0;i<10;i++)
         		cout << setw(2) << i+1 ;
       		cout  << endl ;

      		for (i=0;i<2;i++)
       		{
         		cout << " ";
	     		cout << i+1 << " ";
        		for (j=0;j<10;j++)
          			if (match[i][j]==0)
            			if (i==row[keyinNum] && j==col[keyinNum] || i==row[0] && j==col[0])
              				printSymble(symbolTable,i,j);
            			else
           					printBack();
          			else
            			printSymble(symbolTable,i,j);
          		cout << endl << endl ;
       		}
     	}
     	
    	if (bingo<9)
			_sleep(1000);
    
    	if (symbolTable[row[0]][col[0]]==symbolTable[row[1]][col[1]])
     	{
      		match[row[0]][col[0]]=1; 
      		match[row[1]][col[1]]=1; 
      		bingo++;
     	}

    	system("cls");
    
     	cout << "移動方向鍵並按下Enter選牌，Esc離開程式" << endl << endl ;
     	cout << "   ";
    	for (i=0;i<10;i++)
       		cout << setw(2) << i+1 ;
     	cout  << endl ;

    	for (i=0;i<2;i++)
     	{
         	cout << " ";
	    	cout << i+1 << " ";
      		for (j=0;j<10;j++)
        		if (match[i][j]==0)
              		printBack();
        		else
         			printSymble(symbolTable,i,j);
        	cout << endl << endl ; 
     	}
     	cout << "已經找到 " << bingo << " 對圖形";
   	}
   	cout << endl << endl << "恭喜過關！" ;
  	return 0;
 }
 
void printSymble(int ST[][10],int c,int r)
 {
	char *symbol_context[11]={"◎","★","☆","●","○","♀","♂","▲","▼","◇"};
	char *showSymble; 
	textcolor(ST[c][r]+1);
	showSymble=symbol_context[ST[c][r]];              
    cout << showSymble;
    textcolor(15);
 }
 
 void printBack(void)
 {
 	textcolor(15);
    cout << "■" ;	
 }
