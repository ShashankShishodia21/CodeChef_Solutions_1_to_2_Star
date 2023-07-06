#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
    int a,b,c,d,k;
    while(t--){
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);
        if(a-c < 0){
          k = k-(c-a);
          }
        else{
            k = k+(c-a);
          }
        if(b-d < 0){
          k = k-(d-b);
         }
         else{
          k = k+(d-b);
          }
         if(k<0){
           printf("NO\n");
          }
         else{
             if(k%2==0){
               printf("YES\n");
              }
             else{
               printf("NO\n");
              }
            }
    
       }
	return 0;
}


