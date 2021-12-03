//filename :8-11
#include <iostream>
#include <ctime>
#include <cmath>
#include <windows.h>
#include <conio.h>
#define true 1
#define false 0
using namespace std;

void gotoxy(int xpos, int ypos)
{
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = xpos; scrn.Y = ypos;
	SetConsoleCursorPosition(hOuput,scrn);
}

void showCursor(int visible)
{
	CONSOLE_CURSOR_INFO ConCurInf;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleCursorInfo(hStdOut, &ConCurInf);
	ConCurInf.bVisible = visible;
	SetConsoleCursorInfo(hStdOut, &ConCurInf);
}

void showField()
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
private:
	int sBody[1000][2];
	int headX,headY;
	int tailX,tailY;
	int foodSiteX,foodSiteY;
	int direction;
	int isFoodEaten;
	int bodyLenght;
	int delayTime;
	unsigned int eatenFood;
public:
	int gameOver;
	void init();
	void setSite(int i, int site_x, int site_y);
	void showSnake();
	void setStartSite();
	void calShowFoodSite();
	void isSnakeAlive();
	void moveSnake();
	void SnakeAteFood();
	void controlSnake();
	void printScore();
};

void CSnake::init()
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

void CSnake::setSite(int i, int site_x, int site_y)
{
	sBody[i][0] = site_x;
	sBody[i][1] = site_y;
}

void CSnake::showSnake()
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

void CSnake::setStartSite()
{
	int i;
	sBody[0][0] = sBody[1][0] = sBody[2][0] = sBody[3][0] = sBody[4][0] = 1;
	for(i=0; i<5; i++)
		sBody[i][1] = abs(5 - i);
}

void CSnake::calShowFoodSite()
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
		while(gameKey != 32)
		{
			gotoxy(52,1);
			cout << "press SPACE bar to start.";
			gameKey = getch();
			gotoxy(52,1);
			cout << " ";
		};

		while(!snake.gameOver)
		{
			snake.printScore();
			snake.calShowFoodSite();
			snake.controlSnake();
			snake.isSnakeAlive();
			snake.moveSnake();
			snake.SnakeAteFood();
		}

		while(1)
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
