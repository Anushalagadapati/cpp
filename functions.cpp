#include<iostream>
using namespace std;
void swap1(int a,int b);
void swap2(int &a,int &b);
main()
{
int a=10,b=20;
swap1(a,b);
cout <<"a=" <<a <<"\n";
cout <<"b=" <<b <<"\n";
swap2(a,b);
cout <<"a=" <<a <<"\n";
cout <<"b=" <<b <<"\n";
}
void swap1(int a,int b)
{
int t;
t=a;
a=b;
b=a;
}

void swap2(int &a,int &b)
{
int t;
t=a;
a=b;
b=t;
} 
