//filename:7-2
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int i;
	time_t startT,endT;
	
	startT=time(NULL);
	for (i=0;i<5000;i++)
	    cout << "I love C++." << endl;
	endT=time(NULL);
	cout << "startT=" << startT << "\tendT=" << endT << endl;
	cout << "time=" << difftime(endT,startT) << "sec." << endl;  
 	return 0;
}

