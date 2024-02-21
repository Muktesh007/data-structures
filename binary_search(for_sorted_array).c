#include<stdio.h>
int main()
{
	int n,i,mid,low,high,m;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements in sorted order\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	 printf("enter the number which you want to search\n");
	 scanf("%d",&m);
	  low=0;
	  high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(m==a[mid])
		{
			printf("the position of %d is %d",m,mid+1);
			break;
		}
		else if(m<a[mid])
		{
		    high=mid-1;	
		}
		else if(m>a[mid])
		{
			low=mid+1;
		}
	}
	 if(low>high)
	 {
	 	printf("the entered number %d is not present in the array",m);
	 }
}
