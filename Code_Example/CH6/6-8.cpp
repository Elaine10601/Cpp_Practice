//filename :6-8
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i;
    string article[3]={ "武林至尊，寶刀屠龍。",
                        "號令天下，莫敢不從。",
                        "倚天不出，誰與爭鋒？" };
    for(i=0;i<3;i++)
      cout << article[i] << endl;
 	return 0;
}

