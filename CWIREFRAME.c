#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,m,x;
        scanf("%d%d%d",&n,&m,&x);
        printf("%d\n",2*(n+m)*x);
    }
}