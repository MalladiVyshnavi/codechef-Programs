#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       int x1,y1,x2,y2,a,b;
       scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
       a=x1+y1;
       b=x2+y2;
       if(a<b)
        {
          printf("%d\n",a);
        }
      else{
            printf("%d\n",b);
        }
    }
    
}