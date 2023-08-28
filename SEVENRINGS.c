#include <stdio.h>
#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,x,c;
        scanf("%d%d",&x,&n);
        c=n*x;
        if(c>=10000 && c<=99999)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}