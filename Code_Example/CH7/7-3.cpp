//filename :7-3
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char *players[5] = {"Stephen Curry","Kobe Bryant","LeBron James","Kevin Durant","Jeremy Lin"};
    float avgPts[5] = {25.1,17.6,26.3,28.4,12.4};
	bool flag=0;
    char name[20],upName1[20],upName2[20];
    int i,j;
    cout << "�d��2016�~NBA�y�������o��" << endl;  
    cout << "===============" << endl;  
    cout << "Stephen Curry" << endl;
	cout << "Kobe Bryant" << endl;
	cout << "LeBron James" << endl;  
    cout << "Kevin Durant" << endl;
	cout << "Jeremy Lin" << endl; 
	cout << "===============" << endl; 
    cout << "�п�J�y���m�W�G";  
    
    cin.getline(name,20);
	strcpy(upName1,name);
	strupr(upName1);
  	for(i=0;i<5;i++)
  	{
		strcpy(upName2,players[i]);
		strupr(upName2);
   	  	if(strcmp(upName1,upName2) == 0)
        {  
          cout << endl << players[i] << "�����o��" << avgPts[i] <<endl;  
          flag=1;
          break;
        } 
    }
     if(flag==0)    
       cout << "�藍�_�I���}�C��ƥ��]�t " << name << " ���o���ƾڡC" << endl;
	    
 	return 0;
}

