/*nesting functions */
#include<iostream>
using namespace std;
class sample
{
static int x;
static int y;
public:
static void display(void);
static void swap(void);
};
int sample :: x = 10;
int sample :: y = 20;
main()
{
sample a;
sample :: swap();
sample :: display();
}
static void sample :: display(void)
{
cout <<"x=" <<x <<"\n";
cout <<"y=" <<y <<"\n";
}
static void sample :: swap(void)
{
int t=x;
x=y;
y=t;
//display();
}
