#include<stdio.h>
int main()
{

    int a ;
    printf("enter voter age");
    scanf("%d",&a);
    if (a>=18)
    {

        printf("a can vote",a);
    }
    else
        printf("a cannot vote",a);
    return 0;
}

