#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y,z,a;
        scanf("%d%d%d",&x,&y,&z);
        a=(z-y)/x;
        printf("%d\n",a);
    }
}
