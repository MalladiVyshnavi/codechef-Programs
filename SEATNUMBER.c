#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        if(n>=1 && n<=10)
        {
            printf("Lower Double\n");
        }
        else if(n>=11 && n<=15)
        {
            printf("Lower Single\n");
        }
        else if(n>=16 && n<=25)
        {
            printf("Upper Double\n");
        }
        else
        {
            printf("Upper Single\n");
        }
    }
}