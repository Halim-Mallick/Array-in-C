//Single dimensional/Linear arrays
//Sum and Average of an Array
#include<stdio.h>
int main(){
    int arr[5];
    int i,sum=0;
    printf("Enter Your Value: ");
    for(i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<5; i++){
        sum=sum+arr[i];
    }
    printf("Summation is %d\n",sum);
    printf("Average Number is: %.2lf",(float)sum/5);
    return 0;
}
