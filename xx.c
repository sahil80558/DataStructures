#include<stdio.h>
void main(){

int mat[10][10],i,j;

for(i=0;i<2;i++)
  for(j=0;j<2;j++){
  scanf("%d",&mat[i][j]);
  } 
for(i=0;i<2;i++){
  for(j=0;j<2;j++)
  printf("%d",mat[i][j]);
  printf("\n");
}
}