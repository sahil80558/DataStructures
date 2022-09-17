#include<stdio.h>
void show(int x[],int n,int i){
	int l=i*2+1;
	int r=i*2+2;
	int t;
	int max=i;
	
	if(r<n){
	    if(x[l]>x[max])
	       max=l;
        if(x[r]>x[max])
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
	for(int i=n/2-1;i>=0;i--){
		show(x,n,i);
	}
}
void delete(int x[],int n){
	int t,i;
	for(i=n-1;i<0;i--){
		t=x[0];
		x[0]=x[i];
		x[i]=t;
		show(x,i,0);
	}
}
void main(){
	int x[]={11,12,13,14,15,16,17,18,19,20,21,22,23};
	int n=13;
	showloop(x,n);
	delete(x,n);
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}