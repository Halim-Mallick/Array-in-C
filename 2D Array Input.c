// 2D Array/Matrix array User input
int main() {
   int i,j;
   int A[3][4];
   
  //User input
   for(i=0; i<3; i++){
      printf("New Row: \n");
      for(j=0; j<4; j++){
         printf("A[%d][%d]=",i,j);
         scanf("%d", &A[i][j]);
       }
       printf("\n");
   }

   //Output
   printf("Array Elemnt are: \n");
   for(i=0; i<3; i++){
       for(j=0; j<4; j++){
           printf("%d ", A[i][j]);
       }
       printf("\n");
   }
    return 0;
}
