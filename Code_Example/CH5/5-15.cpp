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
		cout <<"�E�_��\t";
		for (i=1;i<=jewel;i++)
			cout << "o";
		cout << "(" << jewel <<")" << endl;
		cout <<"���a1\t";
		for (i=1;i<=player1Take;i++)
			cout << "o";
		cout <<"(" << player1Take << ")" << endl;
		cout << "���a2\t";
		for (i=1;i<=player2Take;i++)
			cout << "o";
		cout << "(" << player2Take << ")" << endl;

		if (gameOver==1)
			break;
		cout << "\n\n�C�ӤH�@���u�ள��1��3���_��\n";
		cout << "��J���a" << player << "�n�������_�ۭӼ�:";
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
			cout << "�_�ۭӼƿ�J���~,���s��J!\a\n";
			system("pause");
		}
	}

	cout << "\n\n���a" << player << "�鱼����.\a\n"; 
    return 0;
}

