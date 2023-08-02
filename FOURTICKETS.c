#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        if(x*4<=1000)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}