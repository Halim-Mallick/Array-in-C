// Maximum, Minimum, Average and Summation by Array
#include<stdio.h>
int main(){
    int arr[100];
    int n,i,max,min,sum=0;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    
    for(i=0; i<n; i++){
        printf("Enter Array Value: ");
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0; i<n; i++){
        sum=sum+arr[i];
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("\nSummation is: %d\n",sum);
    printf("Maximum is: %d\n",max);
    printf("Minimum is: %d\n",min);
    printf("Avarage is: %.2lf",(float)sum/n);
    return 0;
}
