#include<stdio.h>
int main()
{

    int a,b,c,d,e;
    float p;
    printf("enter marks of five subject numbers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    p=(a+b+c+d+e)/5.0;

   if(p=>80)
   {
       printf("distinction");
   }
   elseif(p>=60)
   {
       printf("first division");
   }
   elseif(p>=45)
   {
       printf("second division");
   }
   elseif(p>=32)
   {
       printf("third division");

   }
   else{
    printf("failed");
   }

}
