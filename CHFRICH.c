#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,x,t,res1,fres;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d %d",&a,&b,&x);
	    res1 = b-a;
	    fres = res1/x;
	    printf("%d\n",fres);
	}
	
	
	return 0;
}

