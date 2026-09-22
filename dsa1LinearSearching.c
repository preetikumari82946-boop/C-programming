#include<stdio.h>

void linearsearch(int a[],int r,int search)
{
    int k=0,i;
    for(i=0;i<r;i++)
    {
if(a[i]==search)
{
    printf("no. is found: %d",i+1);

    k++;
    break;
}
    }

if(k==0)
{
    printf("no. is not found");
}    
}

void main()
{
    int i,a[100],search;
    int r;
    printf("enter a range:");
    scanf("%d",&r);
    printf("enter %d numbers",r);

    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter a number that you want to find:");
    scanf("%d",&search);

    linearsearch(a,r,search);
    getch();
}