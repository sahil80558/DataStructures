#include<stdio.h>
void show(int x[],int n){
	int i,j,t,min;
	
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(x[min]>x[j])   // inner loop copying lesser value index to min 
				min=j;
		}
			if(i!=min){
				t=x[i];
				x[i]=x[min];  // outer loop swapping
				x[min]=t;
			}
	}
}
void main(){
	int x[]={56,29,35,42,15,41,75,21};
	int n=sizeof(x)/sizeof(int);
	show(x,n);
	for(int i=0;i<8;i++){
		printf("%d ",x[i]);
	}
}