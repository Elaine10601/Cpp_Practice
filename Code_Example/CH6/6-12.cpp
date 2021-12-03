//filename :6-12 
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int min=1,max=38;
    int i,j,randNum,existing;
    int lotto[7]={0};
    
    srand(time(NULL));
    cout << "第1選號區：" << endl;
    for(i=0;i<6;i++)
    {
        do
         {
          existing=0;
          randNum=rand()%(max-min+1)+min;
          for (j=0;j<i;j++)
            if (lotto[j]==randNum)
             {
               existing=1;
               break;
             }
         }   
        while (existing>0);
             
        lotto[i]=randNum;        
        cout << setw(2) << setfill('0') << lotto[i] << "\t";               
    }
    lotto[6]=rand()%8+1;
    cout << endl << endl << "第2選號區：" << endl;
	cout << setw(2) << setfill('0') << lotto[6] << endl;

 	return 0;
}

