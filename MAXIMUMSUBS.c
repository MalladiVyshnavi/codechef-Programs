#include <stdio.h>
#include <math.h>
int main(void) 
{
	int i,t,x,a;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&x);
	    a = x*60 - 5;
	    printf("%.f\n",ceil(a/30.0));
	}
	return 0;
}