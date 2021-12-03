//filename :5-15
#include <iostream>
using namespace std;
int main()
{
	int jewel=17;
	int player=1,player1Take=0,player2Take=0;
	int take,i;
	bool gameOver=0;  
  
	while (1)
	{
		system("cls");
		cout <<"聚寶盆\t";
		for (i=1;i<=jewel;i++)
			cout << "o";
		cout << "(" << jewel <<")" << endl;
		cout <<"玩家1\t";
		for (i=1;i<=player1Take;i++)
			cout << "o";
		cout <<"(" << player1Take << ")" << endl;
		cout << "玩家2\t";
		for (i=1;i<=player2Take;i++)
			cout << "o";
		cout << "(" << player2Take << ")" << endl;

		if (gameOver==1)
			break;
		cout << "\n\n每個人一次只能拿走1至3顆寶石\n";
		cout << "輸入玩家" << player << "要拿走的寶石個數:";
		cin >> take;    
		if (take>=1 && take<=3)
		{
			if (take>jewel)
				take=jewel;
			jewel=jewel-take;
			if (player==1)
				player1Take=player1Take+take;
			else
				player2Take=player2Take+take;

			if (jewel <= 0) 
			{
				gameOver=1;
				continue;	
			}

			player++;
			if (player==3)
				player=1;  

			if (jewel == 1)
				gameOver=1;
		}
		else
		{
			cout << "寶石個數輸入錯誤,重新輸入!\a\n";
			system("pause");
		}
	}

	cout << "\n\n玩家" << player << "輸掉比賽.\a\n"; 
    return 0;
}

