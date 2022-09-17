#include<stdio.h>
void main(){
	int x[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	int y[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			printf("%d ",x[i][j]+y[i][j]);
		printf("\n");
	}
}