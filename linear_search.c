#include<stdio.h>
int main()
{
	int n,i,k,count=0;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element which you want to search"); 
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
	  if(k==a[i])
	  {
	  	printf("successful\n");
	  	printf("the element position of %d is %d",k,i+1);
        count++;   	  
	  }
    }
    if(count==0)
	  {
	  	printf("unsuccessful\n");
	  	printf("the element is not present",k);
}
}
