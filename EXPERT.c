#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        float x,y;
        scanf("%f%f",&x,&y);
        if((y/x)*100>=50)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}