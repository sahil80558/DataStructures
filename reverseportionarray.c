#include<stdio.h>
void main(){
	int x[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(x)/sizeof(int);
	int indexS=0;
	int indexE=8;
	int i,j,t;
	for(i=indexS,j=indexE;i<j;i++,j--){
		t=x[i];
		x[i]=x[j];
		x[j]=t;
	}
	for(i=0;i<n;i++)
		printf("%d ",x[i]);
}