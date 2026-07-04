#include <stdio.h>


int main()

{
int x = 1 ; //seed
int a = 5;
int c = 3;
int m = 16;
int i ;
for( i =0;i<20;i++)
{
    x= (a*x+c)% m;
printf("%d",x);}
return 0;}

