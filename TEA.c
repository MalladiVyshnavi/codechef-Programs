#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a<b || a==b)
        {
            printf("%d\n",c);
        }
        else if(a%b==0)
        {
            printf("%d\n",((a/b)*c));
        }
        else
        {
            printf("%d\n",((a/b)+1)*c);
        }
    }
}