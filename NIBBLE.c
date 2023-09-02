#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,n;
        scanf("%d",&x);
        if(x%4==0)
        {
            printf("Good\n");
        }
        else
        {
            printf("Not Good\n");
        }
    }
}