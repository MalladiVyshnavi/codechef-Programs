#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,m,c;
        scanf("%d%d",&n,&m);
        c=n*2+m*4;
        printf("%d\n",c);
    }
}