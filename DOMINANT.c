#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int na,nb,nc;
        scanf("%d%d%d",&na,&nb,&nc);
        if(na>nb+nc || nb>na+nc || nc>na+nb)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
}