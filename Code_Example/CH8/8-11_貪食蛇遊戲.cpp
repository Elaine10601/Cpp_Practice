//filename :8-11
//功能要求 :
//1.以類別物件開發程式
//2.遊戲玩家按下空白鍵，開始遊戲
//3.蛇會自動前進，以鍵盤的方向鍵控制蛇的移動方向
//4.每當蛇吃到食物後，長度會多出一截，計分增加100分
//5.當蛇頭碰觸到邊界或自己的身體，則遊戲結束
#include <iostream>
#include <ctime>//時間日期
#include <cmath>//數學運算
#include <windows.h>
#include <conio.h>
#define true 1
#define false 0
using namespace std;

void gotoxy(int xpos, int ypos)//gotoxy(X,Y)控制游標移動位置的函式
{
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = xpos; scrn.Y = ypos;
	SetConsoleCursorPosition(hOuput,scrn);
}

void showCursor(int visible)//控制游標的顯示狀態是要顯示或隱藏
{
	CONSOLE_CURSOR_INFO ConCurInf;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleCursorInfo(hStdOut, &ConCurInf);
	ConCurInf.bVisible = visible;
	SetConsoleCursorInfo(hStdOut, &ConCurInf);
}

void showField()//顯示邊界，即蛇的活動範圍
{
	int y, x;
	for(y=0; y<20; y++)
		for(x=0; x<51; x+=2)
			if(y==0 || y==19 || x==0 || x==50)
			{
				gotoxy(x, y);
				cout << ".";
			}
}

class CSnake
{
private://資料成員
	int sBody[1000][2];//二維陣列記錄蛇的每一截身體的座標位置；sBody[i][0]為第i截身體的x座標，sBody[i][1]為y座標
	int headX,headY;//紀錄蛇頭的座標
	int tailX,tailY;//紀錄蛇尾的座標
	int foodSiteX,foodSiteY;//紀錄食物的座標
	int direction;//蛇移動方向 1.上 2.下 3.左 4.右
	int isFoodEaten;//旗標，表示食物被吃掉了沒?
	int bodyLenght;//蛇身體的長度，會隨著吃到的食物數目而增加
	int delayTime;//延遲時間，單位為ms
	unsigned int eatenFood;//蛇已經吃到的食物數目
public://成員函式
	int gameOver;
	void init();//設定遊戲的初始條件
	void setSite(int i, int site_x, int site_y);//重新紀錄蛇的每一截身體的座標
	void showSnake();//顯示整條蛇
	void setStartSite();//蛇在左上角，頭下尾上排成一行
	void calShowFoodSite();//在遊戲範圍內，隨機出現食物
	void isSnakeAlive();//檢查蛇是否碰到自己
	void moveSnake();//檢查蛇是否撞牆；如不是，重新顯示蛇，以展示移動的效果
	void SnakeAteFood();//檢查蛇是否吃到食物
	void controlSnake();//檢查玩家所按下的方向鍵，再以方向鍵控制蛇轉彎的方向
	void printScore();//顯示積分
};

void CSnake::init()//設定遊戲的初始條件
{
	bodyLenght=5;
	headX=1;
	headY=5;
	eatenFood=0;
	isFoodEaten = false;
	gameOver = false;
	direction=2;
	delayTime=250;
}

void CSnake::setSite(int i, int site_x, int site_y)//重新紀錄蛇的每一截身體的座標
{
	sBody[i][0] = site_x;
	sBody[i][1] = site_y;
}

void CSnake::showSnake()//顯示整條蛇
{
	for(int i=0; i<bodyLenght; i++)
	{
		gotoxy(sBody[i][0], sBody[i][1]);
		if (i==0)
			cout << "@";
		else
			cout << "O";
	}
}

void CSnake::setStartSite()//蛇在左上角，頭下尾上排成一行
{
	int i;
	sBody[0][0] = sBody[1][0] = sBody[2][0] = sBody[3][0] = sBody[4][0] = 1;
	for(i=0; i<5; i++)
		sBody[i][1] = abs(5 - i);
}

void CSnake::calShowFoodSite()//在遊戲範圍內，隨機出現食物
{
	if( !isFoodEaten )
	{
		foodSiteX = rand()%23*2+3;
		foodSiteY = rand()%17+2;
		isFoodEaten = true;
	}
	gotoxy(foodSiteX, foodSiteY);
	cout << "X";
}

void CSnake::isSnakeAlive()
{
	for(int i=1; i<bodyLenght; i++)
		if(headX == sBody[i][0] && headY == sBody[i][1])
			gameOver= true;
}

void CSnake::moveSnake()
{
	int i;
	if(gameOver == false)
	{
		if(headX>0 && headX<50 && headY>0 && headY<19)
		{
			tailX = sBody[bodyLenght-1][0];
			tailY = sBody[bodyLenght-1][1];
			for(i=bodyLenght-1; i>=0; i--)
				if(i == 0)
					setSite(i, headX, headY);
				else
					setSite(i, sBody[i-1][0], sBody[i-1][1]);
			showSnake();
			Sleep(delayTime);
			gotoxy(tailX, tailY);
			cout << " ";
		}
		else
			gameOver = true;
	}
}

void CSnake::SnakeAteFood()
{
	if(sBody[0][0] == foodSiteX && sBody[0][1] == foodSiteY)
	{
		isFoodEaten = false;
		if(bodyLenght<1000)
			bodyLenght++;
		eatenFood++;
	}
}

void CSnake::controlSnake()
{
	int keyinFirst, keyinSecond;
	if( kbhit() )
	{
		keyinFirst = getch();
		if(keyinFirst == 224)
		{
			keyinSecond = getch();
			switch(keyinSecond)
			{
				case 72: /* up, 1 */
					headY--;
					direction = 1;
					break;
				case 80: /* down, 2 */
					headY++;
					direction = 2;
					break;
				case 75: /* left, 3 */
					headX-=2;
					direction = 3;
					break;
				case 77: /* right, 4 */
					headX+=2;
					direction = 4;
					break;
			}
		}
	}
	else
	{
		switch(direction)
		{
			case 1:
				headY--;
				break;
			case 2:
				headY++;
				break;
			case 3:
				headX-=2;
				break;
			case 4:
				headX+=2;
				break;	
		}
	}
}

void CSnake::printScore()
{
	if (!gameOver)
		gotoxy(52,0);
	cout << "points : " << eatenFood * 100;
}

int main()
{
	CSnake snake;
	char gameKey;
	srand(time(NULL));
	showCursor(0);
	while(1)
	{
		snake.init();
		snake.setStartSite();
		showField();
		snake.printScore();
		snake.showSnake();
		while(gameKey != 32)//等待玩家按下空白鍵，開始遊戲
		{
			gotoxy(52,1);
			cout << "press SPACE bar to start.";
			gameKey = getch();
			gotoxy(52,1);
			cout << " ";
		};

		while(!snake.gameOver)//反覆遊戲，直到蛇頭碰觸到邊界或自己的身體為止
		{
			snake.printScore();
			snake.calShowFoodSite();
			snake.controlSnake();
			snake.isSnakeAlive();
			snake.moveSnake();
			snake.SnakeAteFood();
		}

		while(1)//詢問玩家是否要再玩一次
		{
			system("CLS");
			snake.printScore();
			cout << endl << "Game over. Play again? (y/n)";
			gameKey = getch();
			if(gameKey == 'y' || gameKey == 'Y' || gameKey == 'n' || gameKey == 'N')
			{
				system("CLS");
				break;
			}
		}
		if(gameKey == 'n' || gameKey == 'N') break;
	}
	return 0;
}
