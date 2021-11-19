#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, *ptr, i;
	printf("enter the number of elements - \n");
	scanf("%d",&n);
	ptr=(int *)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("I am sorry no memory has been allocated");
	}
	else
	{
		printf("Memory has been allocated \n");
		printf("Give the elements \n");
		for(i=0;i<n;i++)
		{
			scanf("%d",ptr+i);
		}
		for(i=0;i<n;i++)
		{
			printf("%d\t",ptr[i]);
		}
		
	}
}
