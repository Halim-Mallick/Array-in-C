// 2D Array/ Matrix array
#include <stdio.h>

int main() {
   int i,j;
   int A[3][4]={{5,7,8,9}, {15,16,17,18}, {25,26,27,28}};
   
   for(i=0; i<3; i++){
       for(j=0; j<4; j++){
           printf("%d ", A[i][j]);
       }
       printf("\n");
   }
    return 0;
}
