#include<stdio.h>
#include<stdbool.h>
bool isSorted(int x[],int n){
	if(n<0)return true;
	if(n==0 || n==1)
		return true;
	if(x[n-1]<x[n-2])
        return false;
    isSorted(x,n-1);	
}
void main(){
	int x[]={1,3,4,4,5,7};
	int n=sizeof(x)/sizeof(int);
	if(isSorted(x,n))
		printf("Sorted\n");
	else
		printf("Not Sorted\n");
}