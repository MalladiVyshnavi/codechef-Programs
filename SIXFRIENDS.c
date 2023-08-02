#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x*3>=y*2)
        {
            printf("%d\n",y*2);
        }
        else
        {
            printf("%d\n",x*3);
        }
    }
}