#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front;
struct node *rear;
void enqueue();
void dequeue();
void display();
void main()
{
	int choice;
	while(choice!=4)
	{
		printf("\n 1.insert  2.delete  3.display  4.exit");
		printf("\n what is your choice :");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				{
					enqueue();
				}
				break;
			case 2:
				{
					dequeue();
				}
		       break;
		    case 3: 
		        {
		        	display();
		        	
				}
				break;
			case 4: 
		    	{
		    		exit(0);
				}
				break;
			default :
			   {
			   	printf("Correct your choice please\n");
		    	}		
	}
}
}
void enqueue()
{
	struct node *newnode;
	int item;
	newnode = (struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("Overflow condition\n");
	    return;	
	}
	else
	{
		printf("Input your data");
		scanf("%d",&item);
		newnode->data=item;
		if(front==NULL)
		{
			front = newnode;
			rear=newnode;
			front->next = NULL;
			rear->next= NULL;
		}
		else
		{
			rear->next=newnode;
			rear=newnode;
			rear->next=NULL;
		}
	}
}
void dequeue()
{
	struct node *newnode;
	if(front==NULL)
	{
		printf("Underflow condition \n"); 
		return;
	}
	else
	{
		newnode = front;
		front=front->next;
		free(newnode);
	}
}
void display()
{
	struct node *newnode;
	newnode=front;
	if(front==NULL)
	{
		printf("empty queue \n");
	}
	else
	{ printf("Your queue is \n");
		while(newnode !=NULL)
		{
			printf("%d\n",newnode->data);
			newnode=newnode->next;
		}
	}
}
