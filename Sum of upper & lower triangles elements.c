// Sum of Upper and Lower Triangle elements of a matrix
#include <stdio.h>

int main() {
    int A[10][10];
    int row, col,i,j,upperSum=0,lowerSum=0;
    
    printf("Enter Row and Colum: ");
    scanf("%d %d",&row,&col);
    
    printf("Enter Elements A matrix:\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("Elements of A matrix:");
    for(i=0; i<row; i++){
        printf("\n");
        for(j=0; j<col; j++){
            printf("%d ",A[i][j]);
        }
    }
    
    //Sum of Upper and Lower triangle elements of a matrix
      for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if(i<j){
                upperSum=upperSum+A[i][j];
            }
            if(i>j){
                lowerSum=lowerSum+A[i][j];
            }
        }
    }
    printf("\nSum of Upper triangle Elements=%d",upperSum);
    printf("\nSum of Lower triangle Elements=%d",lowerSum);
    return 0;
}
