#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements\n");
    for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
    }
    printf("the unique elements in the array \n");
     for(i=0;i<n;i++)
    {
    	int count=0;
    	for(j=0;j<n;j++)
    	{
    	  if(a[i]==a[j])
		  {
		    count= count+1;
		  }	
		}
		if(count==1)
		{
		  printf("%d\t",a[i]);
	    }
	}
}
