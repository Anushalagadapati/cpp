#include<iostream>
using namespace std;
void fun(int sum);
main()
{
int sum=9;
sum++;
fun(sum);
int avg=sum/2;
}
void fun(int sum)
{
cout << "sum=" << sum <<"\n";
}
