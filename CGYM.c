#include <stdio.h>

int main() 
{
	int a,b,c,d,i;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
	    scanf("%d %d %d",&b,&c,&d);
	    if(b+c <= d){
	        printf("2\n");
	    }
	    else if(d>=b ){
	        printf("1\n");
	    }
	    else{
	        printf("0\n");
	    }
	}
}

