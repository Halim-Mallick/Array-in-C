//Array | Transpose Matrix
#include<stdio.h>
int main(){
    int A[10][10],transpose[10][10];
    int row,col,i,j;
    printf("Enter Row and colum: ");
    scanf("%d %d",&row,&col);
  
    //Scanning A matrix
    printf("Enter Elments:\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //Printing A matrix
    printf("A Elments: ");
    for(i=0; i<row; i++){
        printf("\n");
        for(j=0; j<col; j++){
            printf("%d ",A[i][j]);
        }
    }
    //Transpose matrix
    for(i=0; i<row; i++){
        printf("\n");
        for(j=0; j<col; j++){
            transpose[j][i]=A[i][j];
        }
    }
    //Printing transpose matrix
    printf("Transpose: ");
    for(i=0; i<col; i++){
        printf("\n");
        for(j=0; j<row; j++){
            printf("%d ",transpose[i][j]);
        }
    }
    return 0;
}
