#include <stdio.h>

int main(void) {
	// your code goes here
	float a,b,c,s;
	int t;
	scanf("%d",&t);
	while(t--){
	    scanf("%f %f %f %f",&s,&a,&b,&c);
	    float cr = s + ((c * s)/100);
	    if(cr >=a && cr <= b){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

