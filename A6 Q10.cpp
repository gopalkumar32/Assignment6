#include<stdio.h>
int main()
{
	int sum=0,r,num;
	printf("Entre the number\n");
	scanf("%d",&num);
	while(num)
	{
		r=num%10;
		sum=sum*10+r;
		num=num/10;
	}
	printf("Reverse of number is %d",sum);
}
