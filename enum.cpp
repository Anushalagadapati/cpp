/*void pointers in cpp*/

#include<iostream>
using namespace std;
main()
{
void *gp;
char *p="anu";
gp=p;
/*void *gp=(char *)anusha;
char *p;
p=gp;*///error in cpp
cout << "output\n"<<(char *)gp<<","<<p;
}
