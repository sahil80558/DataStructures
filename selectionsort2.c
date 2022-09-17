#include<stdio.h>
void show(int x[],int n){
	int i,j,t,max;
	for(i=9;i>0;i--){
		max=i;
		for(j=i-1;j>=0;j--){
			if(x[max]<x[j])
				max=j;
		}
		if(i!=max){
		t=x[i];
		x[i]=x[max];
		x[max]=t;
		}
	}
}
void main(){
	int x[]={1,5,2,6,3,4,7,9,8};
	int n=sizeof(x)/sizeof(int);
	show(x,n);
	for(int i=0;i<9;i++){
		printf("%d ",x[i]);
	}
}