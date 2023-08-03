#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x<y)
        {
            printf("FIRST\n");
        }
        else if(x==y)
        {
            printf("ANY\n");
        }
        else
        {
            printf("SECOND\n");
        }
    }
}