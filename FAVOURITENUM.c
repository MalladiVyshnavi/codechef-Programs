#include <stdio.h>

int main(void)
{
	// your code goes here
	int t,a,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	  scanf("%d",&a);
	  if(a%7==0&&a%2==0)
	  printf("Alice\n");
	  else if(a%9==0&&a%2!=0)
	  printf("Bob\n");
	  else
	  printf("Charlie\n");
	}
	return 0;
}