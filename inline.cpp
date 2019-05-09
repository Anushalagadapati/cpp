#include<iostream>
using namespace std;
inline void fun(int x, int y);
main()
{
int x=10,y=20;
fun(x,y);
}
inline void fun(int x, int y)
{
cout << "x=" <<x <<"\n";
cout <<"y=" <<y <<"\n";
}
