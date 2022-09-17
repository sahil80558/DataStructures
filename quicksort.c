#include<stdio.h>
int show(int x[],int n,int si){
	int pi,p,i,t;
	i=p=si;
    pi=x[n];
	for(;i<n;i++){
		if(x[i]<pi){
			t=x[i];
			x[i]=x[p];
			x[p]=t;
			p++;
		}
	}
		x[n]=x[p];
		x[p]=pi;
	return p;
}
void quickSort(int x[],int n,int si){
	if(si>=n)return;
	int p=show(x,n,0);
	show(x,p-1,0);
	show(x,n,p+1);
}
void main(){
	int x[]={35,33,42,10,14,19,27,44,26,31};
	int n=9;
	quickSort(x,n,0);
	for(int i=0;i<=n;i++)
		printf("%d  ",x[i]);
}