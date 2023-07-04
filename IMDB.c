#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,x,s,r,cr;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&n,&x);
	    cr = 0;
	    while(n--){
	        scanf("%d %d",&s,&r);
	        if(s<=x){
	            if(r > cr){
	                cr = r;
	            }
	        }
	    }
	    printf("%d\n",cr);
	}
	return 0;
}

