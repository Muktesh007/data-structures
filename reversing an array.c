#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the order of an array");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the entered array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\nthe reversed array is\n");
	for(j=n-1;j>=0;j--)
	{
		printf("%d  ",a[j]);
	}
	
}
