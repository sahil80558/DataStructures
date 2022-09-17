#include<stdio.h>
void show(int x){
	printf("%d\n",x);
}
void main(){
	int x[]={1,2,3,4,5};
	int n=sizeof(x)/sizeof(int);
	for(int i=0;i<n;i++){
		show(x[i]);
	}
}