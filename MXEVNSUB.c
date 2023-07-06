#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int sum =0;
	    for(int i = 1;i <= n; i++ ){
	        sum = sum + i;
	       }
	    if(sum%2==0){
	        printf("%d\n",n);
	    }
	    else{
	        printf("%d\n",n-1);
	    }
	}
	return 0;
}

