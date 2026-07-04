#include<stdio.h>
int main()
{
  int a=5,b=6,temp=0;
  temp=b;
  b=a;
  a=temp;
    printf("after swapping the first number is %d",a);
    printf("after swapping the second number is %d",b);
    return 0;

}
