#include<stdio.h>
void main(int argn, char *args[])
{
  FILE *fp;
  fp=fopen("NOTE.txt","a");
  if(argn>2)
  {
  fprintf(fp,"*****%s ******\n",args[1]);
  for(int i=2;i<argn;i++)
  {
  if(i%10==0)
  fprintf(fp,"\n");
  fprintf(fp,"%s\t",args[i]);
  }
  fprintf(fp,"\n------------------------------\n");
  }
  fclose(fp);
}
