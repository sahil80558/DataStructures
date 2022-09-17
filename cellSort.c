#include<stdio.h>
void InsertionSort(int x[],int n){
	int i,j,value;
	for(i=1;i<n;i++){
		value=x[i];
		for(j=i;j>0 && x[j-1]>value;j--)
			x[j]=x[j-1];
		x[j]=value;
	}
}
void CombSort(int x[],int n,int g){
	if(g<=1)return;
	int t;
	for(int i=0;i<(n-g);i++){
		if(x[i+g]<x[i]){
			t=x[i];
		    x[i]=x[i+g];
		    x[i+g]=t;
		}	
	}
	CombSort(x,n,g/2);
}
void display(int x[],int n){
	for(int i=0;i<n;i++)
		printf("%d ",x[i]);
}
void CellSort(int x[],int n){
	CombSort(x,n,n/2);
	InsertionSort(x,n);
	display(x,n);
}
void main(){
	int x[]={2,3,1,4,5,6,9,8};
	int n=8;
	CellSort(x,n);
}
