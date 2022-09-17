#include<stdio.h>
void show(int x[],int n,int i){
	int l=i*2+1;
	int r=i*2+2;
	int t;
	int max=i;
	if(r<n){
		if(x[max]<x[l])
			max=l;
		if(x[max]<x[r])
			max=r;
	}
	else if(l<n)
		max=l;
	if(x[max]>x[i]){
		t=x[i];
		x[i]=x[max];
		x[max]=t;
		show(x,n,max);
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
	int x[]={2,1,5,3,6,5,2,9,7};
	int n=sizeof(x)/sizeof(int);
	showloop(x,n);
	delete(x,n);
	for(int i=0;i<n;i++){
		printf("%d",x[i]);
	}
}