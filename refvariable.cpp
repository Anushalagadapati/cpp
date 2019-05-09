#include<iostream>
using namespace std;
main()
{
int x=10;
int &y=x;
cout << "x=" <<x <<"\n";
cout << "y=" <<y <<"\n";
x=60;
int *p=&x;
y=*p;
cout << "x=" <<x <<"\n";
cout << "*p=" <<*p <<"\n";
cout << "y=" <<y <<"\n";
}
