#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y,c;
        scanf("%d%d",&x,&y);
       printf("%d\n",x/(2*y));
    }
}