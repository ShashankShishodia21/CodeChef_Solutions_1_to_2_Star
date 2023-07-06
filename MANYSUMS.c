#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	
	int a,b;
	
	while(t--){
	    
	    scanf("%d %d",&a,&b);
	    
	    if(a==b){
	        
	        printf("%d\n",1);
	    }else{
	        
	        printf("%d\n",(2*b)-(2*a)+1);
	    }
	    
	    
	}
	return 0;
}

