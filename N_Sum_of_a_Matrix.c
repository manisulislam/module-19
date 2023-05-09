#include<stdio.h>
int main(){
  int row, col;
  scanf("%d %d", &row, &col);
  int a[row][col], b[row][col], c[row][col];
  //a matrix input
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        scanf("%d", &a[i][j]);
    }
  }
  
  //b matrix input
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        scanf("%d", &b[i][j]);
    }
  }
  //c matrix summation a matrix and b matrix
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        c[i][j]=a[i][j]+b[i][j];
    }
  }
  // c matrix print
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        printf("%d ", c[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
