#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,s=0;
	printf("enter the number:");
	scanf("%d",&n);
	int z=n;
	while(n!=0)
	{
	r=n%10;
	s=s+pow(r,3);
	n=n/ 10;	
}

if(s==z)
printf("the given number %d is armstong:",z);
else
printf("the given number %d is not armstrong ",z);
return 0;


	
	
	
	
}