#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int r,a;
        scanf("%d",&r);
        a=(r*1000)/2;
        printf("%d\n",a/5);
    }
}