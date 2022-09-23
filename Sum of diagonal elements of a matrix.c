/ Sum of diagonal elements of a matrix
#include <stdio.h>

int main() {
    int A[10][10];
    int row, col,i,j,sum=0;
    
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
    
    //Sum of diagonal elements of a matrix
    printf("\nDiagonal Elements Are: ");
      for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if(i==j){
                printf("%d \n",A[i][j]);
                sum=sum+A[i][j];
            }
        }
    }   
    printf("\nSum of Diagonal=%d",sum);
    return 0;
}
