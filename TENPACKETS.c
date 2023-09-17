#include <stdio.h>



int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int i=0;
	for(i=0;i<t;i++)
	{
	  int r2,r4;
	  scanf("%d %d",&r2,&r4);
	  int x=(2*r4)+r2;
	  printf("%d\n",x);
	}
	return 0;
}

