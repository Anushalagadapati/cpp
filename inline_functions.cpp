#include<iostream>
using namespace std;
inline int fun(int x,int y);
main()
{
int x=20,y=10;
cout << "output="<<fun(x+y,x-y)<<"\n";
}
inline int fun(int x,int y)
{
return x*y;
}
