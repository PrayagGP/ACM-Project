#include<stdio.h>
int main()
{
    char s[7],s1[7];
    int flag;
    scanf("%s",s);
      for(int i=0;i<7;i++)
      s1[i]=s[6-i];
      printf("%s\n",s1);
    for(int i=0;i<7;i++)
    {
    if(s[i]==s1[i])
    flag=1;
    else
    {
        flag=0;
        break;
    }
    }
    if(flag)
    printf("The reverse of the number is same as the original number\n");
    else
    printf("The reverse of the number is not same as the original number\n");

   
}