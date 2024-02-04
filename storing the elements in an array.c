#include <stdio.h>
int main()
{
	int n,i;
	printf("enter the size of the array");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
    }

    printf("the elements stored in an array is\n");
    for(i=0;i<n;i++)
	{
	  printf("%d\t",a[i]);
    }
}
