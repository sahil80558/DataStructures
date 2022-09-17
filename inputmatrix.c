#include<stdio.h>
// #define r 2
// #define c 2
void main(){
	int r,c;
	printf("Enter Row\n");
	scanf("%d",&r);
	printf("Enter Column\n");
	scanf("%d",&c);
	int x[r][c];
	for(int i=0;i<r;i++){
		printf("Enter Row No=%d\n",i);
		for(int j=0;j<c;j++)
			scanf("%d",&x[i][j]);
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
			printf("%d ",x[i][j]);
		printf("\n");
	}
}