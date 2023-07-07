#include <stdio.h>

int main(void) {
	int a;
	scanf("%d",&a);
	while(a--){
	    int b;
	    scanf("%d",&b);
	    int arr[b];
	    for(int i =0;i<b;i++){
	        scanf("%d",&arr[i]);
	    }
	    int max = 0;
	    for(int i=0;i<b;i++){
	        int count = 0;
	        for(int j=0;j<b;j++){
	            if(arr[i] == arr[j]){
	                count++;
	            }    
	        }
	        if(count>max){
	            max = count;
	        }
	    }
	    printf("%d\n",b-max);
	}
	return 0;
}



