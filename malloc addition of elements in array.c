#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, *ptr, i, sum=0;
	printf("enter the number of elements - \n");
	scanf("%d",&n);
	printf("Entered number of elements is %d\n",n);
	ptr=(int *)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("I am sorry no memory has been allocated");
	}
	else
	{
		printf("Memory has been allocated \n");
		printf("Give the elements");
		for(i=0;i<n;i++)
		{
			scanf("%d",ptr+i);
			sum = sum + ptr[i];
		}
		printf("Given elements are : ");
		for(i=0;i<n;i++)
		{
			printf("\n%d",ptr[i]);
		}
		printf("\n the sum is %d ", sum);
		
	}
}
