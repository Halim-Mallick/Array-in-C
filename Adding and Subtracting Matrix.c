//Adding and Subtracting Matrix 
#include <stdio.h>

int main(){
    int i,j;
    int rows,cols;
    int A[10][10],B[10][10],ADD[10][10],SUB[10][10];
    
    printf("Enter the number of row and cols: \n");
    scanf("%d %d", &rows, &cols);
    
    //Scanning A matrix
    printf("Enter Element for A: \n");
    for(i=0; i<rows; i++){
        printf("New row: \n");
        for(j=0; j<cols; j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    
    //Scanning B Matrix
    printf("Enter Element for B: \n");
    for(i=0; i<rows; i++){
        printf("New row: \n");
        for(j=0; j<cols; j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    
    //Printing A matrix
    printf("\nA= ");
    for(i=0; i<rows; i++){
        printf("\t");
        for(j=0; j<cols; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    
    //Printing B matrix
    printf("\nB= ");
    for(i=0; i<rows; i++){
        printf("\t");
        for(j=0; j<cols; j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    
    //Adding/Substracting Element
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
           ADD[i][j]= A[i][j]+B[i][j];
           SUB[i][j]= A[i][j]-B[i][j];
        }
    }
    
    //Printing A+B
    printf("A+B=");
    for(i=0; i<rows; i++){
        
        for(j=0; j<cols; j++){
            printf("%d ",ADD[i][j]);
        }
        printf("\n\t");
    }
    
    //Printing A-B
    printf("A-B=");
    for(i=0; i<rows; i++){
        
        for(j=0; j<cols; j++){
            printf("%d ",SUB[i][j]);
        }
        printf("\n\t");
    }
    return 0;
}
