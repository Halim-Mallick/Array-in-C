// Fibonacci Number by Array
#include <stdio.h>

int main() {
    int n,i,a[100];
    
    printf("How many Fibonacci Number?: ");
    scanf("%d",&n);
    
    a[0]=0;
    a[1]=1;
    for(i=2; i<n; i++){
        a[i]=a[i-1] + a[i-2];
    }
    
    printf("Fibonacci Series of %d=\n",n);
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
