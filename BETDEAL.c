#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
         int a,b,p,q;
	    scanf("%d%d",&a,&b);
	    
	    p=abs(100*a/100)-100;
	    q=abs(200*b/100)-200;
	    
	    if (p<q)
	    printf("\nSECOND");
	    else if (p==q)
	    printf("\nBOTH");
	    else
	    printf("\nFIRST");
    }
}