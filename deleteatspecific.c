#include<stdio.h>
void show(int x[],int p,int size){
	int i,j,t;
	for(i=p;i<size;i++){
			x[i]=x[i+1];
	}
}
void main(){
	int x[10]={1,2,3,4,5};
	int size=5;
	show(x,2,size--);
	for(int i=0;i<size;i++){
		printf("%d\n",x[i]);
	}
}