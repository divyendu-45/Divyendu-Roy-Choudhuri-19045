#include<stdio.h>
#include<stdlib.h>
int main()
{
  struct node
{
int data ;
struct node*link;
};
struct node *root , *newnode , *temp ;
root=0;
int choice =1;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode ->link=0;
printf("give your data");
scanf("%d",&newnode ->data);
if(root==0)
{
root=temp=newnode;
}
else
{
temp ->link=newnode;
temp=newnode;
}
printf("do you want to proceed?");
scanf("%d",&choice);
}
temp=root;
while(temp!=0)
{
printf("%d\t",temp ->data);
temp=temp ->link;
}
}

