#include<stdio.h>
int main()
{
	int n,i,j,count=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements\n");
    for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(a[i]==a[j]&&i<j)
    		{
    			count = count + 1;
    			break;
			}
		}
	}
	printf("the count of duplicates in array is %d",count);
}
