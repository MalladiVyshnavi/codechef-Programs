#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y,a;
        scanf("%d%d",&x,&y);
        a=x*5;
        if(a>=y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}