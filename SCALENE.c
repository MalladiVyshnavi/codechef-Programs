#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a==b || b==c || c==a)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}