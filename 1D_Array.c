//Single dimensional arrays
#include<stdio.h>
int main(){
    int i, arr[]={10,20,30,40,50};
    printf("A one-dimensional array is a structured collection of components (often called array elements) that can be accessed individually by specifying the position of a component with a single index value");
    printf("--------------------Start Array-------------------\n");
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);
//Shortcut way
    printf("--------------------Shortcut way-------------------\n");
    for(i=0; i<=4; i++){
       printf("%d\n",arr[i]);
    }
    return 0;
}
