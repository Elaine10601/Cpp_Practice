//filename :6-2
#include <iostream>
using namespace std;
int main()
{
	int i;
  	float score[5]={0};
  	for(i=0;i<=2;i++)
  	{
   		if (i==0) cout << "��J�����ơG";
   		if (i==1) cout << "��J�^����ơG";
   		if (i==2) cout << "��J�ƾǤ��ơG";
   		cin >> score[i];
   		score[3]=score[3]+score[i];
  	}
  	score[4]=score[3]/3;
  
  	cout << "���\t�^��\t�ƾ�\t�`��\t����\n";
  	cout << score[0]<<"\t"<<score[1]<<"\t"<<score[2]<<"\t"<<score[3]<<"\t"<<score[4];

 	return 0;
}

