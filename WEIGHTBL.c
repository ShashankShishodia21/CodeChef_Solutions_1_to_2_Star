#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int t,w1,w2,x1,x2,cw,m;
	scanf("%d\n",&t);
	while(t--){
	    scanf("%d %d %d %d %d",&w1,&w2,&x1,&x2,&m);
	    cw = w2-w1;
	    if(cw>=x1*m && cw<=x2*m){
	        printf("1\n");
	    }
	    else{
	        printf("0\n");
	    }
	}
	return 0;
}

