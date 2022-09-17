#include<stdio.h>
#define SIZE 5
#define MAX 2147483647
int x[SIZE][SIZE]={0};
int output[SIZE];
void insert(int v1,int v2,int w){
	x[v1][v2]=w;
	x[v2][v1]=w;
}
void showAll(){
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++)
			printf("%d ",x[i][j]);
		printf("\n");
	}
}
void showAll2(){
	for(int i=0;i<SIZE;i++)
		printf("%d ",output[i]);
}
void algo(int s){
	for(int i=0;i<SIZE;i++)
		output[i]=MAX;
	output[s]=0;
	for(int j=0;j<SIZE;j++)
		if(x[0][j]!=0)
			output[j]=output[0]+x[0][j];
}
void main(){
	insert(0,1,6);
	insert(1,2,5);
	insert(1,4,2);
	insert(2,4,5);
	insert(4,3,1);
	insert(3,0,1);
	insert(1,3,2);
	algo(0);
	showAll2();
}