#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
         if(0.1*x>100)
         {
	        printf("%.f\n",0.1*x);
         }
	     else
	     {
	        printf("100\n");
	     }
    }
}