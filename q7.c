#include<stdio.h>

int main()
{
   float i,x,y;
   printf("|    i     |     y    |    x     |\n");
   for(y=1;y<=6;y=y+1)
   {
       for(x=5.5;x<=12.5;x=x+0.5)
       printf("| %f | %f | %f |\n",(2+y+0.5*x),y,x);
   }
}