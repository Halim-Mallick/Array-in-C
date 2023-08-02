// find 2nd min/max value from an array
#include <stdio.h>

int main() {
    int a[]={4,3,1,8,0,9};
    int i;
   for(i=0; i<6; i++){
       printf("%d ", a[i]);
   }
   int max=a[0];
   int secondMax=a[0];
   for(i=0; i<6; i++){
       if(max<a[i]){
           secondMax=max;
           max=a[i];
       }
       else if(a[i]>secondMax && a[i]!=max){
           secondMax=a[i];
       }
   }
    printf("\n%d ", secondMax);
   
    return 0;
}
