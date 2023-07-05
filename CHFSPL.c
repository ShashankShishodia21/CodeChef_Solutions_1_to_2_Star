#include <stdio.h>

int main(void) {
	// your code goes here
	long int a,b,c,t,ans,ch1,ch2;
	scanf("%ld",&t);
	while(t--){
	    scanf("%ld %ld %ld",&a,&b,&c);
	    if(a>=b && a>=c){
	        ch1=a;
	        if(b>=c){
	            ch2=b;
	        }
	        else if(b<c){
	            ch2=c;
	        }
	    }
	    if(b>=c && b>=a){
	        ch1=b;
	        if(a>=c){
	            ch2=a;
	        }
	        else if(c>a){
	            ch2=c;
	        }
	    }
	    if(c>=a && c>=b){
	        ch1=c;
	        if(a>=b){
	            ch2=a;
	        }
	        else if(b>a){
	            ch2=b;
	        }
	    }
	    ans = ch1+ch2;
	    printf("%d\n",ans);
	}
	return 0;
}

