//filename :6-11
#include <iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
    int *iptr=a;
    int i;
	cout << "a[5]={1,2,3,4,5}" << endl;
    cout << "a陣列的起始位址iptr=" << iptr << endl;
    for(i=0;i<5;i++)
      cout << "&a[" << i << "] = " << iptr+i << "\ta[" << i << "]=*(iptr+" << i << ")=" << *(iptr+i) << endl;
 	return 0;
}

