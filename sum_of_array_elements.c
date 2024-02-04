#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the order of an array");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the entered array is\n");
	for(i=0;i<n;i++)
	{
		sum=sum + a[i];
	}
	printf("the sum of the elements in an array is %d",sum);
}
