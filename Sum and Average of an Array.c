//Single dimensional/Linear arrays
//Sum and Average of an Array
#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int i,sum=0;
    for(i=0; i<5; i++){
        sum=sum+arr[i];
    }
    printf("Summation is %d\n",sum);
    printf("Average Number is: %.2lf",(float)sum/5);
    return 0;
}
