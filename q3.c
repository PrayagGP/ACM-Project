#include<stdio.h>
int check(int n)
{
    int i;
    if(n<2)
    return 0;
    else if(n==2)
    return 1;
    else
    for(i=2;i<n;i++)
    if(n%i==0)
    return 0;
    
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    if(check(i))
    printf("%d ",i);
    
}