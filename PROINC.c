#include <stdio.h>
#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y,z;
        scanf("%d%d",&x,&y);
        z=x-y;
	    printf("%d \n",((x+(x/10))-z));
    }
}