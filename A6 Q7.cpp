#include<stdio.h>
int main()
{
	int num,r=0;
	printf("Entre the value\n");
	scanf("%d",&num);
	while(num)
	{
		num=num/10;
		r++;
	}
	printf("%d",r++);
}
