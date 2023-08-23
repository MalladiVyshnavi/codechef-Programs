#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if((a+b)%2 !=0 ||(c+b)%2 !=0 || (a+c)%2 !=0)
	    printf("yes\n");
	    else
	    printf("no\n");
    }
}