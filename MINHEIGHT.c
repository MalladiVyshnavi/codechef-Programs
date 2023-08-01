#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,h;
        scanf("%d%d",&x,&h);
        if(x>=h)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}