#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	int u,v,a,s,t;
	int k;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d %d %d",&u,&v,&a,&s);
	    k = ((u*u) -(2*a*s));
	    if(k <= (v*v)){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

