#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,check;
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    check=x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);
    if(!check)
    printf("The points lie on a straight line\n");
    else
    printf("The points do not lie on a straight line\n");

}