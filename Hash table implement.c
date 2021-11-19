#include<stdio.h>
#define size 7
int array[size];
void init()
{
	int i;
	for(i=0;i<size;i++)
	array[i]=-1;
}
void insert(int value)
{
	int key=value%size;
	if(array[key]==-1)
	{
		array[key]=value;
		printf("%d inserted at array[%d]\n",value,key);
	}
	else
	{
		printf("Collision. array[%d] has already an element %d ! \n",key, array[key]);
		printf("Unable to inser %d\n",value);
	}
}
void delete(int value)
{
	int key=value%size;
	if(array[key]==value)
	array[key]=-1;
	else
	printf("%d not present in the hash table \n",value);
}
void search (int value)
{
	int key = value%size ;
	if(array[key]==value)
	printf("Search found \n");
	else
	printf("Search not found \n");
}
void print()
{
	int i;
	for(i=0;i<size;i++)
	printf("array[%d] = %d \n", i, array[i]);
}
int main()
{
	init();
	insert(15);
	insert(23);
	insert(98);
	insert(89);
	printf("Your hash table is \n");
	print();
	printf("\n");
	printf("Input has been deleted. ");
	delete(15);
	print();
	printf("\n");
	printf("Input is searching \n");
	search(89);
	return 0;
}
