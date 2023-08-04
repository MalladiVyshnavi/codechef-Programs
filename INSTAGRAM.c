#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x>10*y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
;        }
    }
}