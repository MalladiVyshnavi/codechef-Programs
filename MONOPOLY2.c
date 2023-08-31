#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       int p,q,r,s;
       scanf("%d%d%d%d",&p,&q,&r,&s);   
      if((p>(q+r+s)) || (q>(p+r+s))  || (r>(q+p+s)) || (s>(q+p+r)))
	    {
	        printf("yes\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
    }
    
}