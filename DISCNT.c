#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int x,y;
        scanf("%d",&x);
        y=100-x;
        printf("%d\n",y);
    }
}
