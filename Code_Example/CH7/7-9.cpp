//filename:7-9
#include <iostream>
#include <iomanip>
using namespace std;
void arrayX10(int x10[]);
void printArray(int arr[]);
int main()
{
	int A[3]={1,2,3};
	cout << "�쥻���}�C���e�G";
	printArray(A);
	arrayX10(A);
	cout << "��10��}�C���e�G";
	printArray(A);
 	return 0;
}

void arrayX10(int x10[])
{
	int i;
    for (i=0 ; i<3 ; i++ )
		x10[i] *= 10;
} 

void printArray(int arr[])
{
	int j;
    for (j=0 ; j<3 ; j++ )
		cout << setw(4) << arr[j];
	cout << endl;
}
