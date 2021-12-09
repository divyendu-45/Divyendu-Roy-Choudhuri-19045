#include<stdio.h>
struct complex
{
  int re, im;
  };
int main()
{
  struct complex c1={23,65};
  struct complex c2;
  printf("Give the real and imaginary parts respectively");
  scanf("%d%d", &c2.re,c2.im);
  printf("The details of first complex number is - \n");
  printf("real part- %d , imaginary part - %d \n", c1.re,c1.im);
  printf("The details of second complex number \n");
  printf("real part - %d , imagiary aprt - %d", c2.re,c2.im);
  }
