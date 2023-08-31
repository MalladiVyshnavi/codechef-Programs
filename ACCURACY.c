#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        if(x%3!=0)
        {
	    printf("%d\n",3-(x%3));
            
        }
	    else
	    {
	        printf("0\n");
	    } 
    }
}