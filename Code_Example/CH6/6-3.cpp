//filename :6-3
#include <iostream>
using namespace std;
int main()
{
  int i,j;
  float score[3][5]={0};
  for (i=0;i<3;i++)
    {
    for (j=0;j<3;j++)  
    {      
      if (j==0) cout <<"請輸入" << i+1 << "號同學的國文分數：";
      if (j==1) cout <<"請輸入" << i+1 << "號同學的數學分數：";
      if (j==2) cout <<"請輸入" << i+1 << "號同學的英文分數：";
      cin >> score[i][j];
      score[i][3]+=score[i][j];
    }
    score[i][4]=score[i][3]/3;
    }
    
  cout << "\n\n\n座號\t國文\t數學\t英文\t總分\t平均\n";  
  for (i=0;i<3;i++)
  {
     cout << i+1 << "\t";
     for (j=0;j<4;j++)  
    {
      cout << score[i][j] << "\t";
    }
    cout << score[i][4] << endl;
  }

 	return 0;
}

