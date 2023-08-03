#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y,z;
        scanf("%d%d",&x,&z);
        y=x*3;
        if(z>=y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}