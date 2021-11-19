#include<stdio.h>
int stack[10];
int choice, n, top, x, i;
void push(void);
void pop(void);
void show(void);
int main()
{
	top =-1;
	printf("Enter the size of stack[Max=10]");
	scanf("%d",&n);
	printf("Go ahead to do stack operation using array \n");
	printf("push 1 , pop 2 , display 3 , exit 4 \n");
	do
	{
		printf("\n Enter your choice please");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					push();
					break;
				}
		        case 2:
				{
					pop();
					break;
				}
		
			case 3: 
			    {
				show();
				break;
				}		
		       case 4: 
		        {
			printf("Exit");
			break;
				 }
				 default :
				 {
					printf("Please give a valid choice");
				  } 
			}
			
	}
	while(choice!=4);
	return 0;                                                    
}
void push()
{
	if(top>=n-1)
	{
		printf("stack is overflow");
	}
	else
	{
		printf("Enter a value");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
if(top<=-1)
{
	printf("Stack is underflow");
	 }	
else
{ 
	printf("\n the popped elements is %d",stack[top]);
	top--;
}
}
void show()
{
	if(top>=0)
	{
		printf("\n the elements are : \n");
		for(i=top;i>=0;i--)
		{
			printf("\n %d", stack[i]);
			
		}
		printf("\n Press next choice.");
	}
	else
	{
		printf("\n Stack empty.");
	}
}

