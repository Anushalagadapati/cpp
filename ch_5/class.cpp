/*basic class example */
#include<iostream>
using namespace std;
class sample
{
int x;
int y;
public:
void fun1(void);
void fun2(void);
};
main()
{
sample a;
a.fun1();
a.fun2();
}
void sample :: fun1(void)
{
x=10;
y=20;
}
void sample :: fun2(void)
{
cout <<"x=" <<x <<"\n";
cout <<"y=" <<y <<"\n";
}
