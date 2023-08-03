#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y,z,a,b,c,d;
        scanf("%d%d%d",&x,&y,&z);
    	a=x*5;
		b=y*10;
		c=a+b;
		d=c/z;
		printf("%d\n",d);
    }
}