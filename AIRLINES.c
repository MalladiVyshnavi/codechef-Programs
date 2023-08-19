#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if((x*10)>=y)
        {
            printf("%d\n",y);
        }
        else
        {
            printf("%d\n",x*z*10);
        }
        
    }
}