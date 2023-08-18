#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if((x*15)>=(2*y))
        {
	       puts("YES");
        }
	    else 
	    {
	       puts("NO");
	    }
	}
}
