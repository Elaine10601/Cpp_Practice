//filename :8-5
#include <iostream>
#include <string>
using namespace std;
struct basketball 
{
    string name;
	int scoring;  //±o¤À
    int rebound;  //ÄxªO
    int assist;   //§U§ð
    int steal;    //§ÛºI
    int block;//ªý§ð
} player={"Jason Chang",38,12,10,3,2};

void TriDou(int,int,int,int,int);

int main()
{
   cout << "player's name:" << player.name << endl;
   cout << "scoring=" << player.scoring << endl;
   cout << "rebound=" << player.rebound << endl;
   cout << "assist=" << player.assist << endl;
   cout << "steal=" << player.steal << endl;
   cout << "block=" << player.block << endl;
   TriDou(player.scoring,player.rebound,player.assist,player.steal,player.block);
   return 0;
}

void TriDou(int a,int b,int c,int d,int e)
{
	int count=0;
    if (a>=10) count++;
    if (b>=10) count++;
    if (c>=10) count++;
    if (d>=10) count++;
    if (e>=10) count++;
    if (count>=3) 
    	cout << "Triple-double !!" << endl;
	else
		cout << "Not reaching the target." << endl;	
}

