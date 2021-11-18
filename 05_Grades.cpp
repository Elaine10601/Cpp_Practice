#include<iostream>

using namespace std;
int main()
{
	int i,j,k=0;
	float score[4][7]={0};
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if(j==0) cout << "請輸入" << i+1 << "號同學的國文分數:";
			if(j==1) cout << "請輸入" << i+1 << "號同學的數學分數:";
			if(j==2) cout << "請輸入" << i+1 << "號同學的英文分數:";
			cin >> score[i][j];
			
			score[3][j]=score[3][j]+score[i][j];
			score[i][3]=score[i][3]+score[i][j];
			score[3][3]=score[3][3]+score[i][j];
			
			if (score[i][j]<60) 
			{
				score[i][5]=score[i][5]+1;
				score[3][5]=score[3][5]+1;
			}
		}
		score[i][4]=score[i][3]/3;
		score[3][4]=score[3][4]+score[i][4];
	}
	score[3][0]=score[3][0]/3;
	score[3][1]=score[3][1]/3;
	score[3][2]=score[3][2]/3;
	score[3][3]=score[3][3]/3;
	score[3][4]=score[3][4]/3;
	
	for (int p=0;p<3;p++)
	{
		if ((score[p][3]>=score[0][3])&&(score[p][3]>=score[1][3])&&(score[p][3]>=score[2][3]))
		{
			score[p][6]=1;
		}
		else if ((score[p][3]<=score[0][3])&&(score[p][3]<=score[1][3])&&(score[p][3]<=score[2][3]))
		{
			score[p][6]=3;
			k=k+1;
		}
		else score[p][6]=2;
	}
	if (k>=2)
	{
		for (int p=0;p<3;p++)
		{
			if (score[p][6]==3)
			{
				score[p][6]=2;
			}
		}
	}
	
	cout << "\n\n\n座號\t國文\t數學\t英文\t總分\t平均\t不及格數\t名次\n";
	
	for (i=0;i<4;i++)
	{
		if (i<3)
		{
			cout << i+1 << "\t";
		}
		else
		{
			cout << "\t";
		}
		for (j=0;j<6;j++)
		{
			cout << score[i][j] << "\t"; 
		
		}
		cout << "\t" << score[i][6] <<endl;
		
	}
	return 0;
}
