#include<stdio.h>
#include<stdbool.h>
#define SIZE 5
#define MAX 246499
bool marked[SIZE];
int output[SIZE];
int x[SIZE][SIZE];
void insert(int,int,int);
int minimumIndex();
void showAll2();
void showAll1();
void algo(int);
void showAll1(){
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++)
			printf("%d ",x[i][j]);
		printf("\n");
	}
}
int minimumIndex(){
	int min=MAX;
	int minIndex=-1;
	for(int i=0;i<SIZE;i++){
		if(min>output[i] && marked[i]==false){
			min=output[i];
			minIndex=i;
		}
	}
	return minIndex;
}
void algo(int s){
	for(int i=0;i<SIZE;i++){
		output[i]=MAX;
		marked[i]=false;
	}
	output[s]=0;
	for(int i=0;i<SIZE;i++){
		int m=minimumIndex();
		marked[m]=true;
		for(int j=0;j<SIZE;j++){
			if(x[m][j]!=0 && output[j]>output[m]+x[m][j] && marked[j]==false)
				output[j]=output[m]+x[m][j];
		}
		showAll2();
	}
}
void insert(int v1,int v2,int w){
	x[v1][v2]=w;
	x[v2][v1]=w;
}
void showAll2(){
	for(int i=0;i<SIZE;i++)
		printf("%d\t",output[i]);
	printf("\n");
}
void main(){
	insert(0,1,6);
	insert(1,2,5);
	insert(1,4,2);
	insert(2,4,5);
	insert(4,3,1);
	insert(3,0,1);
	insert(1,3,2);
	algo(1);
}
