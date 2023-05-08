#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i=1;
	int a,b;
	while(i<=t)
	{scanf("%d %d",&a,&b);
	
	if((a+b)>6)
	printf("YES\n");
	else
	printf("NO\n");
	i++;
	}
	return 0;
}

