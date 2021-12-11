#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, n, m, *ptr;
	printf("Give the size of array");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Sorry. No memory has been allocated.");
	}
	else
	{
		printf("Your memory has been allocated successfully.");
	printf("Give the entries :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
		for(i=0;i<n;i++)
	{
		printf("%d",ptr[i]);
	}
	}
	printf("\n");
	printf("Give the new array size : \n");
	scanf("%d",&m);
	ptr=(int *)realloc(ptr, m*sizeof(int));
	if(ptr==NULL)
	{
		printf("Sorry. No memory has been allocated.");
	}
	else
	{
	printf("Give the new entries :\n");
	for(i=n;i<m;i++)
	{
		scanf("%d",ptr+i);
	}
		for(i=0;i<m;i++)
	{
		printf("%d",ptr[i]);
	}
}
}
