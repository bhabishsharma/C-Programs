#include <stdio.h>
int main()
{
int a,b,quot,remin;
printf("enter two numbers");
scanf("%d%d",&a,&b);
remin=a%b;
printf("reminder is %d\n",remin);
quot=a/b;
printf("quot is %d",quot);
return 0;
}
