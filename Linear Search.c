// Searching a number (Linear search)
#include <stdio.h>
int main() {
    int arr[]={10,20,30,40,50,60,70};
    int value,i,pos=-1;
    printf("Enter Value you want to search: ");
    scanf("%d",&value);
    
    for(i=0; i<7; i++){
        if(value==arr[i]){
           pos=i+1;
           break;
        }
    }
    if(pos==-1){
        printf("Value is not found");
    }
    else{
        printf("Value is found at possition %d",pos);
    }
    return 0;
}
