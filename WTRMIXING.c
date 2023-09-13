#include <stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,x,y;
        scanf("%d%d%d%d",&a,&b,&x,&y);
         if (a==b){
            printf("yes\n");
        }
        else if(a>b && a-b<=y){
            printf("yes\n");
        }
        else if (a<b && b-a<=x){
            printf("yes\n");
            
        }
        else{
            printf("no\n");
        }
    }
}


