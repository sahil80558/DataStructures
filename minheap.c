#include<stdio.h>
void show(int x[],int n,int i){
	int l=i*2+1;
	int r=i*2+2;
	int t;
	int min=i;
	if(r<n){
		if(x[min]>x[l])
			min=l;
		if(x[min]>x[r])
			min=r;
	}
	else if(l<n)
		min=l;
	if(x[min]<x[i]){
		t=x[i];
		x[i]=x[min];
		x[min]=t;
		show(x,n,min);
	}
}
void showloop(int x[],int n){
	int i;
	for(i=n/2-1;i>=0;i--){
		show(x,n,i);
	}
}
void delete(int x[],int n){
	int t,i;
	for(i=n-1;i>0;i--){
		t=x[0];
		x[0]=x[i];
		x[i]=t;
		show(x,i,0);
	}
}
void main(){
	int x[]={20,12,34,8,6,2};
	int n=sizeof(x)/sizeof(int);
	showloop(x,n);
	delete(x,n);
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}