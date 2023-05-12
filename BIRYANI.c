#include <stdio.h>
int main()
{
    int t,i,x,y,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&x,&y);
	    n=x*y;
	    printf("%d\n",n);
	}
    return 0;
}