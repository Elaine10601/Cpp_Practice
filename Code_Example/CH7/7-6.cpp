//filename :7-6 
#include <iostream>
using namespace std;
int area(int,int);
void drawRectangle(int,int);
int main()
{
	int w, l,rectangleArea;
	cout << "矩形的寬度:";
	cin >> w;
	cout << "矩形的長度:";
	cin >> l;
    
    if (w>0 && l>0)
    {
	  rectangleArea=area(w,l);
	  cout << "矩形的面績:" << rectangleArea << endl << endl; 
      drawRectangle(w,l);
    }
    else
      cout << "邊長要大於零喔!" << endl;
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
