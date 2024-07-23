/*
Q1)Wap to check if a string is pallindrome or not and if yes
return the number of letters in the string
*/
#include<stdio.h>
int pallicheck(char*,int);
int main()
{
    char s[100];
    int res,i,len,count;
    fgets(s,100,stdin);
    for(len=0;s[len]!='\n'&&s[len]!='\0';len++);
    res = pallicheck(s,len);
    if(res)
    {
        for(i=0;i<len;i++)
        {
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
                count++;
        }
        printf("%d",count);
    }
    else
        printf("Not pallindrome");
    return 0;
}
int pallicheck(char *p,int len)
{
    int che=1,i;
    char w[100];
    for(i=len-1;i>=0;i--)
    {
        w[len-1-i] = *(p+i);
    }
    for(i=0;i<len;i++)
    {
        if(*(p+i)!=w[i])
        {
            che=0;
            break;
        }
    }
    return che;
}