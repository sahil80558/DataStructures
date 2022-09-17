#include<stdio.h>
int linearSearch(int x[],int n,int se,int i){
	if(i>n-1)return -1;
	if(x[i]==se)
		return i;
	linearSearch(x,n,se,i+1);
}
void main(){
	int x[]={3,5,2,6,10,0,9,7,20};
	int n=sizeof(x)/sizeof(int);
	int se=3;
	printf("%d\n",linearSearch(x,n,7,0));
}