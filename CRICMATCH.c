#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(b*36<a)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}