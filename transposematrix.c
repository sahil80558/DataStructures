#include<stdio.h>
void main(){
	int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int y[3][3];
	int t;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			y[j][i]=x[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			printf("%d ",y[i][j]);
		printf("\n");
	}
}