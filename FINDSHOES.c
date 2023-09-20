#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        if(m>=n)
        {
            printf("%d\n",n);
        }
        else
        {
            printf("%d\n",2*n-m);
        }
    }
}