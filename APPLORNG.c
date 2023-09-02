#include <stdio.h>
int main()
{
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    if(x>=a+b)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}