#include<stdio.h>
int main()
{
    int t,a,b,c,d,i;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        int n=a+b+c+d;
        if(n==0)
        printf("IN");
        else
        printf("OUT");
        printf("\n");
    }
}