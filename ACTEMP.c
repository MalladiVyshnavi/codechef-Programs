#include <stdio.h>
int main()
{
    int i,t,a,b,c,max;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d %d",&a,&b,&c);
	    if(a>c)
	    max = a;
	    else
	    max = c;
	    
	    if(b>=max)
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
}