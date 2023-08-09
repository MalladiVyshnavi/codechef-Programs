#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c;
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            c=7-a;
            printf("%d\n",c);
        }
        else
        {
            c=7-b;
            printf("%d\n",c);
        }
        
    }
}