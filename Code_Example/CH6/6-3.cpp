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
      if (j==0) cout <<"�п�J" << i+1 << "���P�Ǫ������ơG";
      if (j==1) cout <<"�п�J" << i+1 << "���P�Ǫ��ƾǤ��ơG";
      if (j==2) cout <<"�п�J" << i+1 << "���P�Ǫ��^����ơG";
      cin >> score[i][j];
      score[i][3]+=score[i][j];
    }
    score[i][4]=score[i][3]/3;
    }
    
  cout << "\n\n\n�y��\t���\t�ƾ�\t�^��\t�`��\t����\n";  
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

