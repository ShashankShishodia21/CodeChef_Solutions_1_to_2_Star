#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,d,e,f,t,ans;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	    if((a==c || a==d)&&(b==c || b==d)){
	        ans = 1;
	    }
	   else if((a==e || a==f)&&(b==e || b==f)){
	        ans = 2;
	    }
	   else{
	        ans = 0;
	    }
	   printf("%d\n",ans); 
	}
	return 0;
}

