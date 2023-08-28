#include <stdio.h>

int main(void) {
	// your code goes here
	int T,X,Y,N;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d %d",&X,&Y);
	    N=X-Y;
	    if(N<=0)
	    {
	        printf("\n0");
	    }
	    else if(N%4==0)
	    {
	        printf("\n%d",N/4);
	    }
	    else
	    {
	        printf("\n%d",(N/4)+1);
	    }
	    
	}
	return 0;
}

