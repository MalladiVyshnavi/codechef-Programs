#include <stdio.h>

int main() 
{
	int t,i,w,x,y,z,a,b;
	scanf("%d",&t);
    for(i=0;i<t;i++)
	{
	    scanf("%d %d %d %d",&w,&x,&y,&z);
	    a = x-y;
	    b = a*z;
	    printf("%d\n",w+b);
	}
	return 0;
}