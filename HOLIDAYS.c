#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	  int n,w,ans=0;
	  int k=0;
	  scanf("%d %d",&n,&w);
	  int arr[n];
	  for(int i=0;i<n;i++){
	      scanf("%d",&arr[i]);
	  }
	  for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(arr[i]>arr[j])
	            {
	               int temp=arr[i];
	                   arr[i]=arr[j];
	                   arr[j]=temp;
	            }
	        }
	    }
	  for(int i=n-1;i>=0;i--){
	      if(ans<w){
	          ans = ans+arr[i];
	          k++;
	      }
	  }
	  printf("%d\n",n-k);
	}
	return 0;
}

