/*Making outside function inline */
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
x=20;
y=20;
}
inline void sample :: fun2(void)
{
cout <<"x=" <<x <<"\n";
cout <<"y=" <<y <<"\n";
}
