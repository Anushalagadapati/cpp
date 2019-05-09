#include<iostream>
using namespace std;
void fun1(int x, int y, int z=10);
main()
{
int x=10,y=20;
fun1(x,y);
}
void fun1(int x, int y, int z)
{
cout << "output=" <<x+y+z <<"\n";
}
