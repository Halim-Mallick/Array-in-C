// User can decide array size and array value by this program
#include <stdio.h>
int main() {
    int arr[100];
    int i,n,sum=0;
   
    printf("Enter Array Size: ");
    scanf("%d",&n);
    
    printf("Enter Array Value: \n");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0; i<n; i++){
        sum=sum+arr[i];
    }
    printf("Summation is %d\n", sum);
    printf("Average is %.2lf", (float)sum/n);
    return 0;
}
