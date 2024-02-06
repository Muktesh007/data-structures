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
    printf("enter the index where you want to delete");
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
	  	for(i=m;i<=n;i++)
	  	{
	  		a[m]=a[m+1];
		}	
	  for(i=1;i<n;i++)
	{
		printf("%d\t",a[i]);
    }
	}
}
