#include<stdio.h>
int main()
{
	int n,i,k,m;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements\n");
    for(i=1;i<=n;i++)
	{
	  scanf("%d",&a[i]);
    }
    printf("enter the index where you want to insert");
    scanf("%d",&m);
    printf("\nenter the element which you want to insert");
    scanf("%d",&k);   
    for(i=n+1;i>=m;i--)
    {
    	a[i]=a[i-1];
	}
	a[m]=k;
	for(i=1;i<=n+1;i++)
	{
		printf("%d\t",a[i]);
	}
}
