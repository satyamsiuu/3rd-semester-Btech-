//3)reverse a string using pointers without using stlen
#include<stdio.h>
int main()
{
    int len,i;
    char s[100],*p;
    fgets(s,100,stdin);
    for(len=0;s[len]!='\n'&&s[len]!='\0';len++);
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
