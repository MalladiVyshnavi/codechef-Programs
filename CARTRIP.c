#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        if(x>300)
        {
            printf("%d\n",x*10);
        }
        else
        {
            printf("%d\n",300*10);
        }
    }
}