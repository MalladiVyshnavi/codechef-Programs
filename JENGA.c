#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,x;
        scanf("%d%d",&n,&x);
        if(n==x || x%n==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}