#include<stdio.h>
int main()
{
	int a,b;
	printf("Entre the two number\n");
	scanf("%d%d",&a,&b);
	for(int i=a>b?b:a;i<=a*b;i++)
	if(i%a==0&&i%b==0)
	{
	printf("LCM of two number is %d",i);
	break;
}
}
