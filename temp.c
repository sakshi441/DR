#include<stdio.h>

int main()
{
 float fr,cel;
 int low,high;

 low=0;
 high=300;
 fr=high;
 printf("fahrenheit\tcelsius\n");
 while(fr>=low)
    {
      cel = 5 * (fr-32) / 9;
      printf("%3.0f\t\t%3.2f \n",fr,cel);
      fr = fr - 20;
    }
 return 0;
}