#include<stdio.h>
int main()
{
	int i=0,n,sum=0;
	int *p;
	printf("enter the size of the array");
	scanf("%d",&n);
	int a[n];
	p=&a;
	for(i=0;i<n;i++)
	{
		scanf("%d",&*(p+i));
	}
	for(i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
	printf("sum of the elements in an array is %d",sum);
}
