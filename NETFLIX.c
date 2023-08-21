#include <stdio.h>

int main()
{
	int t,i;
	scanf("%d",&t);
    for(i=0;i<t;i++)
    {
	    int a,b,c,x;
	    scanf("%d",&a);
	    scanf("%d",&b);
	    scanf("%d",&c);
	    scanf("%d",&x);
	    if((a+b)>=x||(b+c)>=x||(c+a)>=x)
	    {
	        printf("yes\n");
	    }
	    else
	    {
	    printf("No\n");
	    }
    }
}
