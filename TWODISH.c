#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a,b,c,t;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d %d %d",&n,&a,&b,&c);
	    /*if(b>=n){
	        if((a+c)<=b && (a+c)>=n){
	           printf("YES\n"); 
	        }
	        else{
	        printf("NO\n");
	        }
	    }
	    else{
	        printf("NO\n");
	    }*/
	    if(a+c >= n && b>=n){
	       printf("YES\n"); 
	        
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

