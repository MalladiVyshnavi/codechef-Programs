#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c,d;
        scanf("%d%d",&a,&b);
        scanf("%d%d",&c,&d);
        if(c>=a && d>=b)
        {
            printf("Possible\n");
        }
        else
        {
            printf("Impossible\n");
        }
    }
}