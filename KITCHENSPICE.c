#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        if(x<4)
        {
            printf("MILD\n");
        }
        else if(x>=4 && x<7)
        {
            printf("MEDIUM\n");
        }
        else {
            printf("HOT\n");
        }
    }
}