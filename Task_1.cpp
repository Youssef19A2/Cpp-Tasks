//Task 1 maximum number between three values
#include <iostream>
#include <stdio.h>
int a=0;
int b=0;
int c=0;

int main()
{
std::cin>>a;
std::cin>>b;
std::cin>>c;
if((a > b)&&(a > c))
{
printf("a is the maximum number\n");
}
if((b > a)&& (b > c))
{
printf("b is the maximum number\n");
}
if((c > a)&& (c > b))
{
printf("c is the maximum number\n");
}

return 0;
}