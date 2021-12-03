//filename :6-2
#include <iostream>
using namespace std;
int main()
{
	int i;
  	float score[5]={0};
  	for(i=0;i<=2;i++)
  	{
   		if (i==0) cout << "輸入國文分數：";
   		if (i==1) cout << "輸入英文分數：";
   		if (i==2) cout << "輸入數學分數：";
   		cin >> score[i];
   		score[3]=score[3]+score[i];
  	}
  	score[4]=score[3]/3;
  
  	cout << "國文\t英文\t數學\t總分\t平均\n";
  	cout << score[0]<<"\t"<<score[1]<<"\t"<<score[2]<<"\t"<<score[3]<<"\t"<<score[4];

 	return 0;
}

