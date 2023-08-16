#include <stdio.h>
int main()
{
    int p,q,r,s,count=0;
  scanf("%d %d %d %d",&p,&q,&r,&s);
  if(p>=10 ) {
      count++;
  }
 if(q>=10){
      count++;
  }
  if(r>=10){
      count++;
  }
  if(s>=10){
      count++;
  }
  printf("%d",count);
}