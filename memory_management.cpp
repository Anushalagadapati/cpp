#include<iostream>
using namespace std;
main()
{
int *p=new int;
*p=5;
cout << "*p=" << *p <<"\n";
delete p;
p=new int [5];
p[0]=10;
cout << "p[0]=" << p[0] <<"\n";
delete p;
}
