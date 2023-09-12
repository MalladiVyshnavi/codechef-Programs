#include <stdio.h>

int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    int n,x,k;
	     scanf("%d%d%d",&n,&x,&k);
	     if(k/x<=n)
	     {
	         printf("%d\n",k/x);
	     }
	     else{
	         printf("%d\n",n);
	     }
	    
	}
	
	return 0;
}

