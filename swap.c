#include<stdio.h>
int swap(int *,int *);
int main()
{
	int a,b;
	int *x,*y;
	x=&a;
	y=&b;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	printf("before swapping the numbers are %d and %d",*x,*y);
	swap( &x, &y);
	printf("\n after swapping the numbers are %d and %d",*x,*y);
    return 0;
}
int swap(int *x,int *y)
{
	int c;
	c=*x;
	*x=*y;
	*y=c;
}
