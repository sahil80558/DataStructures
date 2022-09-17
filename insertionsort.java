#include<stdio.h>
void show(int x[],int n){
	int i,j,value;
	for(i=1;i<n;i++){
		value=x[i];
		for(j=i;j>0;j--){
			if(x[value]<x[j-1]){
				x[j]=x[j-1];
				else break;
			}
			x[j]=value;
		}
	}
}
void main(){
	int []={1,2,4,5,6,3,7,8};
	for(int i=0;i<8;i++){
		printf("%d ",x[i]);
	}
	show(x,8);
	for(int i=0;i<8;i++){
		printf("%d ",x[i]);
	}
	
}