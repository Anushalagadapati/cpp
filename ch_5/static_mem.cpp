/*static member functions */
#include<iostream>
using namespace std;
class sample
{
static int y;
void display(void);
public:
void fun1(void);
};
int sample:: y=10;
main()
{
sample a;
a.fun1();
}
void sample :: fun1(void)
{
y++;
display();
}
void sample :: display(void)
{
cout <<"y=" <<y <<"\n";
}

