#include <stdio.h>

int main() {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c;
	    scanf("%d %d",&b ,&c);
	    printf("%d\n",(b*10)+(c*5));
	}
}