#include<stdio.h>
int add(int, int);  // "FUNCTION DECLEARATION"
int main()
{
   int a,b,sum; // varriable declearation
   printf("Give the values");
   scanf("%d%d",&a,&b); // get the numbers those have to be added 
   sum=add(a,b); // " FUNCTION CALL"
   printf("sum is %d",sum); // printing the sum
}
int add(int x, int y) // "FUNCTION DEFINITION"
{
  int res;
  res = x+y; // Logic of addition
  return res; // to return the value to 'sum'
}
