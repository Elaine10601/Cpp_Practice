//filename :4-2 
#include <iostream>
using namespace std;
int main()
{
   int a=5, i=5;
   
   cout <<"a= " << a << endl;  
   cout <<"a++會先執行本敘述後再將a的值加1 , 此時a++的傳回值為" << a++ << endl;
   cout <<"a=" << a << endl << endl << endl;
   
   cout << "i= "<< i << endl;
   cout << "++i則先把i的值加1後，再執行本敘述 , 此時++i的傳回值為" << ++i << endl;
   cout <<"i=" << i << endl;

 	return 0;
}

