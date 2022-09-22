//Array | Matrix Multiplication
#include<stdio.h>
int main(){
    int A[10][10],B[10][10],MUL[10][10];
    int row1,row2,col1,col2,i,j,k;
    int sum=0;

    printf("Enter row and col for A matrix: ");
    scanf("%d %d",&row1,&col1);
    printf("Enter row and col for B matrix: ");
    scanf("%d %d",&row2,&col2);

    while(col1!=row2){
        printf("Invalid! Colum of A Matrix must be equal to row of B Matrix\n");
        printf("Enter row and col for A matrix: ");
        scanf("%d %d",&row1,&col1);
        printf("Enter row and col for B matrix: ");
        scanf("%d %d",&row2,&col2);
    }

    //Scanning A matrix
    printf("Enter element for A matrix: \n");
    for(i=0; i<row1; i++){

        for(j=0; j<col1; j++){
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    //Scanning B matrix
    printf("Enter element for B matrix: \n");
    for(i=0; i<row2; i++){
        for(j=0; j<col2; j++){
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    //Multiplying A and B matrix
    for(i=0; i<row1; i++){
        for(j=0; j<col2; j++){
            for(k=0; k<col1; k++){
               sum=sum+ A[i][k]*B[k][j];
            }
            MUL[i][j]=sum;
            sum=0;
        }
    }

    //Printing A matrix
    printf("\n");
    printf("A: ");
    for(i=0; i<row1; i++){
        printf("\n");
        for(j=0; j<col1; j++){
            printf("%d ",A[i][j]);
        }
    }

    //Printing B matrix
    printf("\nB: ");
    for(i=0; i<row2; i++){
        printf("\n");
        for(j=0; j<col2; j++){
           printf("%d ",B[i][j]);
        }
    }

    //Printing Multiply A & B
    printf("\n\nMultiply Matrix: ");
    for(i=0; i<row1; i++){
        printf("\n");
        for(j=0; j<col2; j++){
            printf("%d ",MUL[i][j]);
        }
    }
    return 0;
}
