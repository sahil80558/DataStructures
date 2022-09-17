#include<stdio.h>
void main(){
	int x[]={1,2,3,4,5,6,7};
	int n=sizeof(x)/sizeof(int);
	int i,j,t;
	for(i=0,j=n-1;j>i;i++,j--){
		t=x[i];
		x[i]=x[j];
		x[j]=t;
	}
	for(i=0;i<n;i++)
		printf("%d ",x[i]);
}