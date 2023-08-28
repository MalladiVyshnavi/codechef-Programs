#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,p;
        scanf("%d",&n);
        p=n*1000;
        printf("%d\n",p/100);
    }
}