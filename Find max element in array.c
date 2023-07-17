#include <stdio.h>
int main() {
    int i,arr[]={9,5,1,8,9,2};
    int size=6;
    printf("Enter finding element: ");
    int max=arr[0];
    for(i=0; i<size; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}
