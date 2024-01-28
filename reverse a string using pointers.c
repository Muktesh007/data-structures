#include<stdio.h>
#include<string.h>
int main()
{
	char name[50],*p1,*p2,a;
	printf("enter the string\n");
	gets(name);
	printf("before reversing\n");
	puts(name);
	int l;
	l=strlen(name);
	p1 = name;
	p2 = name+l-1;
    while(p1<p2)
	{
		a=*p1;
		*p1=*p2;
		*p2=a;
		*p1++;
		*p2--;
	}
	printf("after reversing\n");
	puts(name);
	  
}
