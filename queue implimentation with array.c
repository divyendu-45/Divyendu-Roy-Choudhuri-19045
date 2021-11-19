#include<stdio.h>
int main()
{
	int n;
	printf("The maximum size -");
	scanf("%d",&n);
	int queue[n],ch =1,front = 0,rear=0,i,j=1,x=n;
	printf("\n1. Insertion \t2. deletion \t3.display \t4. exit");
	while(ch)
	{
		printf("\n What is your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					if(rear==x)
					printf("Queue is full");
					else
					{
					
						printf("Enter data");
						
						scanf("%d",&queue[rear++]);
					}
				}
				break;
			case 2:
			    {
				   if(front==rear)
				   printf("Queue is empty\n");
				   else
				   {
				   
				   	  printf("Deleted element is %d\n",queue[front++]);
				   	  x++;
				   }
				}
				break;
			case 3: 
		     	{
				printf("Your queue is \n");
				if(front==rear)
				printf("No element is there !!");
				else
				{
					for(i=front;i<rear;i++)
					{
						printf("%d\t",queue[i]);
						
					}
				}
				}	
				break;	
			case 4:
					{
						exit(0);
					}
		    default:
			{
				printf("Correct your choice please");
					}		
		}
	}
}
