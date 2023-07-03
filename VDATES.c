#include <stdio.h>

int main(void) {
	// your code goes here
	int t,d,l,r;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d %d",&d,&l,&r);
	    if(d>=l && d<=r){
	        printf("Take second dose now\n");
	    }
	    if(d<l){
	        printf("Too Early\n");
	    }
	    if(d>r){
	        printf("Too Late\n");
	    }
	}
	return 0;
}

