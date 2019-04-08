#include<stdio.h>

int main()
{
 int n,i;
 n = 1;

 for(i=0; i < 2*n; i++)
  {
   if(i%2==0)
   printf("%d\t",i);
  }
return 0;
}