#include<stdio.h>
void reverse(char *name)
{
	if(*name)
	{
		reverse(name+1);
		printf("%c", *name);
	}
}

int main()
{
 char name[20];
 printf("Enter string - ");
 gets(name);
 
 reverse(name);
 return 0;
}
