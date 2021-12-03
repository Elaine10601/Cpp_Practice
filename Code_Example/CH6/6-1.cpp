//filename :6-1 
#include <iostream>
using namespace std;
int main()
{
	int score[4];
  	score[0]=80;  //���
  	score[1]=88;  //�^��
  	score[2]=85;  //�ƾ�
  	score[3]=score[0]+score[1]+score[2];  //�p���`��
  
  cout << "���\t�^��\t�ƾ�\t�`��" << endl;
  cout <<score[0]<<"\t"<<score[1]<<"\t"<<score[2]<<"\t"<<score[3];

 	return 0;
}

