#include<stdio.h>
int main()
{
	int i,num;
	printf("Entre the number\n");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
	if(num%i==0)
	{
	printf("NOt prime number");
	break;
}
}
if(num==i)
printf("Prime number");
}


