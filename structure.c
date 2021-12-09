#include<stdio.h>
struct student
{
  int id;
  char name[20];
  float perc;
};
int main()
{
  struct student s1={20,"Divyendu",75.5};
  struct student s2;
  printf("Give the details of the student");
  scanf("%d%s%f", &s2.id,s2.name,&s2.perc);
  printf("The details of Divyendu - \n");
  printf("name - %s , identity number - %d , percentage - %f \n", s1.name,s1.id,s1.perc);
  printf("The details of %s \n",s2.name);
  printf("name - %s , identity number - %d , percentage - %f", s2.name,s2.id,s2.perc);
  }
