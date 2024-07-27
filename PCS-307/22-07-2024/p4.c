#include<stdio.h>
typedef struct student
{
    int rollno;
    char name[50];
    char sec;
}st;
int main()
{
    FILE *p;
    st s;
    int n,i;
    printf("Enter no. of students: ");
    scanf("%d",&n);
    p = fopen("Data.txt","w");
    if(p==NULL)
    {
        printf("File error\n");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        printf("Enter name, roll number and section:-\n");
        scanf(" %[^\n]%d %c",s.name,&s.rollno,&s.sec);
        fwrite(&s,sizeof(st),1,p);
    }
    fclose(p);
    p = fopen("Data.txt","r");
    if(p==NULL)
    {
        printf("File error\n");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        fread(&s,sizeof(st),1,p);
        printf("\nData of student %d:-\nName: %s\nRoll no: %d\nSection: %c\n",i+1,s.name,s.rollno,s.sec);
    }
    fclose(p);
    return 0;
}
