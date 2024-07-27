//2)reverse a string using pointers
#include<stdio.h>
#include<string.h>
int main()
{
    int len,i;
    char s[100],*p;
    fgets(s,100,stdin);
    len = strlen(s)-1;
    p=s;
    for(i=0;i<len/2;i++)
    {
        char temp=*(p+i);
        *(p+i)=*(p+len-1-i);
        *(p+len-1-i)=temp;
    }
    puts(s);
    return 0;
}
