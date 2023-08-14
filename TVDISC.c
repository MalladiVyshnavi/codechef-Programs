#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c,d,e,f;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        e=a-c;
        f=b-d;
        if(e<f)
        {
            printf("First\n");
        }
        else if(f<e)
        {
            printf("Second\n");
        }
        else
        {
            printf("Any\n");
        }
        
    }
}