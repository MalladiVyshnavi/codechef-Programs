#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,a,b;
        scanf("%d%d%d",&x,&a,&b);
        if(a*1+b*2>=x)
        {
            printf("Qualify\n");
        }
        else
        {
            printf("NotQualify\n");
        }
    }
}