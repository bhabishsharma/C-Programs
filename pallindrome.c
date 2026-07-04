#include<stdio.h>
#include<math.h>
int main(){
	int n,r,s=0;
	printf("enter the number:");
	scanf("%d",&n);
	int z=n;
	while(n!=0){
		r=n%10;
		s=s*10+r;
		n=n/10; 
		
	}
	if(z==s)
	printf("the given number %d is pallindrome",z);
	else
	printf("the given number %d is not pallindrome",z);
	return 0;
}