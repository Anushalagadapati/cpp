/*nesting functions */
#include<iostream>
using namespace std;
class sample
{
int x;
int y;
void display(void);
public:
void fun1(void);
void swap(void);
};
main()
{
sample a;
a.fun1();
a.swap();
}
void sample :: fun1(void)
{
x=10;
y=20;
display();
}
inline void sample :: display(void)
{
cout <<"x=" <<x <<"\n";
cout <<"y=" <<y <<"\n";
}
void sample :: swap(void)
{
int t=x;
x=y;
y=t;
display();
}
