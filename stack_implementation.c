#include<stdio.h>
int stack[25],top=-1,n;
int isEmpty();
int isFull();
void push(int item);
int pop();
int peek();
int main()
{  
  printf("enter the size of the stack\n");
  scanf("%d",&n);
  push(7);
  push(1);
  peek();
  push(3);
  pop();
  push(0);
  pop();
  push(5);	
  push(2);
  push(8);
  pop();
  printf("the final stack is\n");
  display();
}
int isEmpty()
{
	if(top==-1)
	return 1;
	else
	return 0; 
}
int isFull()
{
	if(top==n)
	return 1;
	else
	return 0;
}
void push(int item)
{
  	if(isFull()==1)
  	printf("overflow");
  	else
  	{
  		top++;
  		stack[top]=item;
    }
}
int pop()
{
	int item;
	if(isEmpty()==1)
	{
		printf("underflow\n");
		return -1;
	}
	else
	{
		item = stack[top];
		top--;
		printf("the pop element is %d\n",item);
		return item;
	}
}
int peek()
{
	int item;
	if(isEmpty()==1)
	printf("underflow\n");
	else
	{
		item = stack[top];
		printf("the peek element is %d\n",item);
		return item;
	}
}
void display()
{
    if(top>=0)
	{
	int i;
	for(i=top;i>=0;i--)
		printf("%d\n",stack[i]);
	}
	else
	{
		printf("\nstack is empty");
	}
}
