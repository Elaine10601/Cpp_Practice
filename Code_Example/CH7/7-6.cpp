//filename :7-6 
#include <iostream>
using namespace std;
int area(int,int);
void drawRectangle(int,int);
int main()
{
	int w, l,rectangleArea;
	cout << "�x�Ϊ��e��:";
	cin >> w;
	cout << "�x�Ϊ�����:";
	cin >> l;
    
    if (w>0 && l>0)
    {
	  rectangleArea=area(w,l);
	  cout << "�x�Ϊ����Z:" << rectangleArea << endl << endl; 
      drawRectangle(w,l);
    }
    else
      cout << "����n�j��s��!" << endl;
    cout << endl;

    return 0;
}

int area(int width,int length)
{
 return width*length;
}

void drawRectangle(int width,int length)
{   
	int i,j;
	for(i=0; i<length; i++)
	 {
	   cout << " ";
       for(j=0; j<width; j++)
		 cout << "*";
	   cout << endl;
	 }
}
