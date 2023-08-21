#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int c,x,y,a;
        scanf("%d%d%d",&c,&x,&y);
        a=c-x;
        printf("%d\n",a*y);
    }
}