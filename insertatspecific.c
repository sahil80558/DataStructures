#include<stdio.h>
void show(int x[],int p,int value,int size){
	int i;
	for(i=size;i>p;i--)
		x[i]=x[i-1];
	x[i]=value;
}
void main(){
	int x[10]={1,2,3,4,5};
	int size=5;
	show(x,2,55,size++);
	for(int i=0;i<size;i++){
		printf("%d\n",x[i]);
	}
}