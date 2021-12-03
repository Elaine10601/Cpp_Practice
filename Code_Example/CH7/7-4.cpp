//filename :7-4
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int key1,key2; 

    while(1)
    {
        key1 = getch();
        if(key1 == 27) 
            break;
        key2 = getch();
        if(key1 == 224)
            switch(key2)
            {
            case 72:
                cout << "up!" << endl;
                break;
            case 75:
                cout << "left!" << endl;
                break;
            case 77:
                cout << "right!" << endl;
                break;
            case 80:
                cout << "down!" << endl;
                break;
            }  
    }

 	return 0;
}

