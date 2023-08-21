#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int w,x,y,z;
        scanf("%d%d%d%d",&w,&x,&y,&z);
         if((x-w)>y*z)
	    {
	        printf("unfilled\n");
	    }
	    else if((x-w)<(y*z))
	    {
	        printf("overflow\n");
	    }
	    else
	    {
	        printf("filled\n");
	    }
    }
}
