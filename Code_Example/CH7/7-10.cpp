//filename:7-10
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void flushCard(int playCards[][13]);
void showCard(int playCards[][13]);
int main()
{
    int poker[4][13]={0};
	flushCard(poker);
	showCard(poker);
	system("pause");
 	return 0;
}

void flushCard(int playCards[][13])
{
	int i,j,player=0,card=0;
	srand(time(NULL));
	do
	{
		i = rand()%4;
		j = rand()%13;
		if ( playCards[i][j] == 0 )
		{
			player = player % 4 + 1;
			playCards[i][j] = player;
			card++;
		}
	}
	while (card<52);
}

void showCard(int playCards[][13])
{
	char suits[4]={6,3,4,5}; //黑桃、紅心、方塊、梅花
    char *points[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
	int player,i,j;
    for (player=1 ; player<=4 ;  player++ )
	 {
		cout << "玩家 " << player << " ";
        for (i=0;i<4;i++)
		  for (j=0;j<13;j++)
			if (playCards[i][j]==player)
			  cout << setw(4) << suits[i] << setw(2) << points[j];
		cout << endl << endl;
	 }
}
