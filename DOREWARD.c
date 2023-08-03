#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        if(x>6)
        {
            printf("GOLD\n");
        }
        else if(x>3 && x<=6)
        {
            printf("SILVER\n");
        }
        else
        {
            printf("BRONZE\n");
        }
    }
}