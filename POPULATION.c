#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y,z,p;
        scanf("%d%d%d",&x,&y,&z);
        p=x-y+z;
        printf("%d\n",p);
    }
}