#include <stdio.h>
int main()
{
    	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,z;
	    scanf("%d%d%d",&x,&y,&z);
	    if(z>=y/x){
	        printf("%d\n",z-(y/x));
	    }
	    else{
	        printf("%d\n",0);
	    }
	}
}