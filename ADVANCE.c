#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(y<=x+200 && y>=x)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}