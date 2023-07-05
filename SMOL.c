#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,k;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&n,&k);
	    if(k==0){
	        printf("%d\n",n);
	    }
	    else {
	        printf("%d\n",n%k);
	    }
	}
	return 0;
}

