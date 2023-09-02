#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        int c;
        if(x%4==0)
        {
            c=x/4;
        }
        else
        {
            c =x/4+1;
        }
        printf("%d\n",c);
        
    }
}