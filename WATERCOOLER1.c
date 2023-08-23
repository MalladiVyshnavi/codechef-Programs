#include <stdio.h>

int main() {
	// your code goes here
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    int b,c,d;
	    scanf("%d %d %d",&b ,&c,&d);
	    if(b*d<c){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}
}