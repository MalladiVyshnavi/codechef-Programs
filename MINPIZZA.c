#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,x;
        scanf("%d%d",&n,&x);
        if((n*x)%4==0)
        {
	    printf("%d\n",(n*x)/4);
        }
	    else
	    {
	    printf("%d\n",(n*x)/4+1);
	    }
    }
}