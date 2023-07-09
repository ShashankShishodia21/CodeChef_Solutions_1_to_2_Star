#include <stdio.h>

int main(void) {

	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    int ans=0;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=1;i<=n;i++){
	        scanf("%d",&arr[i]);
	    }
	    for(int i=1;i<=n;i++)
	        for(int j=i+1;j<=n;j++){
	        if(arr[i]==arr[j]){
	            ans++;
	            break;
	        }
	    }
	    printf("%d\n",n-ans);
	}
	return 0;
}

