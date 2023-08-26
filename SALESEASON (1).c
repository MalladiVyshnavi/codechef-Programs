#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
         int x;
	    scanf("%d",&x);
	    if (x<=100)
	    printf("%d\n",x);
	    if (100<x && x<=1000)
	        {
	        int a;
	        a=x-25;
	        printf("%d\n",a);
	        }
	        if (1000<x && x<=5000)
	        {
	            int b;
	            b=x-100;
	            printf("%d\n",b);
	        }
	        if (x>5000)
	        {
	            int c;
	            c=x-500;
	            printf("%d\n",c);
	        }
    }
}