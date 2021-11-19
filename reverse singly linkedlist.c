#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
	int data;
	struct node *link;
}node;

struct node *dup(node *copy)
{
    if (copy==NULL)
    return NULL;

    else
    {
    node *new=malloc(sizeof(node));
    new->data=copy->data;
    new->link=dup(copy->link);

    return new;
    }
}	

void printLinkedlist(node *p)
{
	while(p!= NULL)
		{
		printf("\t %d ",p->data);
		p = p->link;
		}
}


void reverse(node *ref)
{
 node *curr=ref, *prev=NULL,*link=NULL;

    while(curr!=NULL)
    {
        link = curr->link;
        curr->link = prev;
        prev = curr;
        curr = link;
    }
 ref=prev;
 printf("\nThe reverse linked list is ");
 printLinkedlist(ref);
}

int main(void)
{

	node *digits = NULL;
    int i=0, num,flag = 1;
	
while(1)
	{
		int num;
		printf("\nenter your data: ");
		scanf("%d", &num);
	
		if (num == 0)
		{	if(flag<7)
		 	 printf("Please enter atleast 7 elements\nAbort!!\n");
			 
			else {printf("\nThe linked list is ");printLinkedlist(digits);}
		break;
		}
		
		node *n = malloc(sizeof(node));

		if(!n)
		{
			return 1;		
		}


		n-> data =num;
		n-> link = NULL;

		if(digits)
		{
			node *ptr;
			for (ptr =digits; ptr!=NULL; ptr=ptr->link)
			{
			if(ptr->link == NULL) 
			{
                ptr->link=n;
				flag++;
				break;
			}}
		}
		else
		{
			digits=n;		
		}
	}
if(flag >= 7 )
{    node *newlist= dup(digits);
    reverse(newlist);
}
}

