#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,s,ans,a,b;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&n,&s);
	    /*if(n>=s){
	        ans = s;
	    }
	    else if(n<s){
	        ans = s-n;
	    }
	    printf("%d\n",ans);*/
	    if(n>=s){
	       a = s;
	       b = 0;
	       ans = a;
	        
	    }
	    if(n<s){
	       a = n;
	       b = s-n;
	       ans = a - b;
	        
	    }
	    printf("%d\n",ans);
	    
	}
	return 0;
}

