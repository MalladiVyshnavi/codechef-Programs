#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x>0 && y>0){
	        if(x!=y)
	        printf("NO\n");
	        else
	        printf("YES\n");
	    }
	    else
	    printf("NO\n");
    }
}