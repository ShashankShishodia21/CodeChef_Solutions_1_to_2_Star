#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,ans;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    ans = (n/2)+1;
	    printf("%d\n",ans);
	}
	return 0;
}

