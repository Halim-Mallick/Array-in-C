//Simple Matrix
#include <stdio.h>

int main(){
    int i,j;
    int A[3][4],B[3][4];
   
    printf("Enter Element for A: \n");
    for(i=0; i<3; i++){
        printf("New row: \n");
        for(j=0; j<4; j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nA= ");
    for(i=0; i<3; i++){
        printf("\t");
        for(j=0; j<4; j++){
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
    //B Matrix
    printf("Enter Element for B: \n");
    for(i=0; i<3; i++){
        printf("New row: \n");
        for(j=0; j<4; j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("\nB= ");
    for(i=0; i<3; i++){
        printf("\t");
        for(j=0; j<4; j++){
            printf("%d",B[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
