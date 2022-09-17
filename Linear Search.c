// Searching a number (Linear search)
#include <stdio.h>
int main() {
    int arr[30];
    int value,i,pos=-1,n;
    
    printf("Enter Array Size: ");
    scanf("%d", &n);
    printf("Enter array Value: \n");
    for(i=0; i<n; i++){
    
        scanf("%d",&arr[i]);
    }
    printf("Enter Value you want to search: ");
    scanf("%d",&value);
    
    for(i=0; i<n; i++){
        if(value==arr[i]){
           pos=i+1;
           break;
        }
    }
    if(pos==-1){
        printf("Value is not found\n");
    }
    else{
        printf("Value is found at position %d",pos);
    }
    return 0;
}
