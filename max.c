#include<stdio.h>
int max(int x,int y)
{
 if(x>y) return  x;
  else return y;
}
int main()
{
 int a = 50;
 int b = 30;
 int c = 80;
 printf("%d",max(a,max(b,c)));
return 0;
}