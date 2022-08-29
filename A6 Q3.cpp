#include<stdio.h>
int main()
{
	int sum=0,n;
	printf("Entre the number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	sum=sum+2*i-1;
	printf("%d",sum);
}
