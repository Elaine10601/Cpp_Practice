//filename :6-10
#include <iostream>
using namespace std;
int main()
{
   int iN1,iN2;
   int *iptr1,*iptr2;
   cout << "請輸入兩筆整數" << endl;
   cout << "第一筆整數iN1=";
   cin >> iN1;
   cout << "第二筆整數iN2=";
   cin >> iN2;
   cout << "\t\t\tiN1\tiN2\tiptr1\t\t*iptr1\t\tiptr2\t\t*iptr2" << endl;
   cout << "\t\t\t------------------------------------------------------------------------" << endl;
   cout << "iN1=" << iN1 << ",iN2=" << iN2 << "\t\t";
   cout << iN1 << "\t" << iN2 << "\t" << iptr1 << "\t\t\t" << iptr2 << endl;
   iptr1=NULL;
   iptr2=0;	
   cout << "iptr1=NULL,iptr2=0\t";
   cout << iN1 << "\t" << iN2 << "\t" << iptr1 << "\t\t\t\t" << iptr2 << endl;
   iptr1=&iN1;	
   iptr2=&iN2;		
   cout << "iptr1=&iN1,iptr2=&iN2\t";
   cout << iN1 << "\t" << iN2 << "\t" << iptr1 << "\t" << *iptr1 << "\t\t" << iptr2 << "\t" << *iptr2 << endl;
   *iptr1=100;		
   *iptr2=500;	
   cout << "*iptr1=" << *iptr1 <<",*iptr2=" << *iptr2 << "\t";
   cout << iN1 << "\t" << iN2 << "\t" << iptr1 << "\t" << *iptr1 << "\t\t" << iptr2 << "\t" << *iptr2 << endl;
   iN1=2;	
   iN2=6;
   cout << "iN1=" << iN1 << ",iN2=" << iN2 << "\t\t";
   cout << iN1 << "\t" << iN2 << "\t" << iptr1 << "\t" << *iptr1 << "\t\t" << iptr2 << "\t" << *iptr2 << endl;
   iptr2=iptr1;		
   cout << "iptr1=iptr2\t\t";
   cout << iN1 << "\t" << iN2 << "\t" << iptr1 << "\t" << *iptr1 << "\t\t" << iptr2 << "\t" << *iptr2 << endl;
   *iptr2=321;		 
   cout << "*iptr2=" << *iptr2 << "\t\t";
   cout << iN1 << "\t" << iN2 << "\t" << iptr1 << "\t" << *iptr1 << "\t\t" << iptr2 << "\t" << *iptr2 << endl;
   iptr2=&iN2;		 
   cout << "iptr2=&iN2\t\t";
   cout << iN1 << "\t" << iN2 << "\t" << iptr1 << "\t" << *iptr1 << "\t\t" << iptr2 << "\t" << *iptr2 << endl;
   iN2=206;      
   cout << "iN2=" << iN2 << "\t\t\t";
   cout << iN1 << "\t" << iN2 << "\t" << iptr1 << "\t" << *iptr1 << "\t\t" << iptr2 << "\t" << *iptr2 << endl;
   *iptr1=*iptr2*2; 
   cout << "*iptr1=*iptr2*2\t\t";
   cout << iN1 << "\t" << iN2 << "\t" << iptr1 << "\t" << *iptr1 << "\t\t" << iptr2 << "\t" << *iptr2 << endl;

 	return 0;
}

