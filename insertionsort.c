#include<stdio.h>
void show(int x[],int n){
	int i,j,value;
	for(i=1;i<n;i++){
		value=x[i];
		for(j=i;j>0;j--){
			if(value<x[j-1])
				x[j]=x[j-1];
				else break;
		}
			x[j]=value;
	}
}
void main(){
	int x[]={8,7,6,5,4,3,2,1};
	int n=sizeof(x)/sizeof(int);
	for(int i=0;i<8;i++){
		printf("%d ",x[i]);
	}
		printf("\n\n");
	show(x,n);
	for(int i=0;i<8;i++){
		printf("%d ",x[i]);
	}
	
}