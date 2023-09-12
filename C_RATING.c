#include <stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int c;
        c=y-x;
        if(c%8==0)
        {
            printf("%d\n",c/8);
        }
        else
        {
            printf("%d\n",((c/8)+1));
        }
    }
}

