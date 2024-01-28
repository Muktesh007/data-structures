#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c,r,*p,i,j,k=0;
	printf("enter number of columns and rows");
	scanf("%d%d",&c,&r);
	p=(int*)calloc(r*c,sizeof(r*c));
	if(p==NULL)
	{
		printf("Sorry, unable to allocate memory");
		exit(0);
	}
	printf("enter the elements");
	for(i=0;i<r*c;i++)
	{
	  scanf("%d",&*(p+i));	  	
	}
	printf("the two dimensional array is\n");
	    
		for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)	
		{
	      printf("%d  ",*(p+k));
		  k++;	
	    }
	    printf("\n");
	}
	free(p);
	return 0;	
}


