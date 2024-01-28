#include<stdio.h>
void power(int *,int *);
int main()
{
	int a,b;
	printf("enter the number");
	scanf("%d",&a);
	printf("enter the power");
	scanf("%d",&b);
    power(&a,&b);
	
}
void power(int *x,int *y)
{
	int s=1,i;
	for(i=1;i<=*(y);i++)
	{
		s=s*(*x);
	}
	printf("the %dth power of the %d is %d",*y,*x,s);
}

