#include <stdio.h>

int main(void) {
	// your code goes here
	long int r,a,b;
	int t;
	scanf("%d",&t);
	while(t--){
	    scanf("%ld %ld",&a,&b);
	    long int sum = a+b;
	    long int ans=0;
	    while(sum>0){
	        r = sum % 10;
	        if(r == 0){
	            ans = ans + 6;
	        }
	        if(r == 1){
	            ans = ans + 2;
	        }
	        if(r == 2){
	            ans = ans + 5;
	        }
	        if(r == 3){
	            ans = ans + 5;
	        }
	        if(r == 4){
	            ans = ans + 4;
	        }
	        if(r == 5){
	            ans = ans + 5;
	        }
	        if(r == 6){
	            ans = ans + 6;
	        }
	        if(r == 7){
	            ans = ans + 3;
	        }
	        if(r == 8){
	            ans = ans + 7;
	        }
	        if(r == 9){
	            ans = ans + 6;
	        }
	        sum = sum/10;
	    }
	    printf("%ld\n",ans);
	}
	return 0;
}

