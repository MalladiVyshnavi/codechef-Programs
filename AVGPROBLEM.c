#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b,c;
	float f;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&a,&b,&c);
	    f=(a+b)/2.0f;
	    if(f>c)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

