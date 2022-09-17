#include<stdio.h>
void show(int x[],int n){
	int i,j,value;
	for(i=n-2;i>=0;i--){
		value=x[i];
		for(j=i;j<=n-1 && x[j+1]<value;j++)
				x[j]=x[j+1];
			x[j]=value;
	}
}
void main(){
	int x[]={2,1,5,3,5,4,9,6,7};
	int n=9;
	show(x,n);
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}