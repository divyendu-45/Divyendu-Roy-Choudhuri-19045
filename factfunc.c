#include<stdio.h>
int fact(int);
int main()
{
  int a, factorial;
  printf("give the number please");
  scanf("%d",&a);
  if(a==0)
  {
   printf("factorial is 1");
  }
  else if (a>0)
  {
  factorial = fact(a);
  printf("the factorial of the given number is %d", factorial);
  }
  else
  {
   printf("check the given entry please");
}
}
int fact(int x)
{
  int i;
  int mul=1;
  for(i=1;i<=x;i++)
  {
    mul= mul*i;
}
return mul;
}

