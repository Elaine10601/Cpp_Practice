//filename :8-3 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct game
{
    string name;
    string account;
    string password;
} player,*ptr;

int main()
{
	ptr=&player;
	cout << "player's name:";
	cin >> (*ptr).name;
	cout << "player's account:";
	cin >> (*ptr).account;
	cout << "player's password:";
	cin >> (*ptr).password;
	
	cout << endl;
	cout << setw(10) << "name" << setw(10) << "account"  << setw(10) << "password" << endl;
	cout << "--------------------------------" << endl;
	cout << setw(10) << ptr->name << setw(10) << ptr->account << setw(10) << ptr->password << endl;
 	return 0;
}

