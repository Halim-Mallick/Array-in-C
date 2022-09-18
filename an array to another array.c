// Copy all elements of an array to another array
int main() {
    int n,i,arr1[30],arr2[30];
    
    printf("Enter Array Size: ");
    scanf("%d",&n);
    
    //User input Array value
    printf("Enter array Element:\n");
    for(i=0; i<n; i++){
        scanf("%d",&arr1[i]);
    }
    
    //printing Array1 value
    printf("Array1: ");
    for(i=0; i<n; i++){
        printf("%d ",arr1[i]);
   }
    
    //Copy all the elements from arr1 to arr2
    for(i=0; i<n; i++){
        arr2[i]=arr1[i];
    }
  
    //Printing Array2 value
    printf("\nArray2: ");
    for(i=0; i<n; i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}
