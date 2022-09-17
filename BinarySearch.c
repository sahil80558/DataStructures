#include<stdio.h>
int BinarySearch(int x[],int n,int se,int si){
	if(si>n)return -1;
	int mid=(si+n)/2;
	if(x[mid]==se)
		return mid;
	else if(se<x[mid])
		BinarySearch(x,mid-1,se,si);
	else
		BinarySearch(x,n,se,mid+1);
}
void main(){
	int x[]={2,5,8,10,12,15,18,50,80,90};
	int n=sizeof(x)/sizeof(int);
	int se=90;
	int si=0;
	printf("%d\n",BinarySearch(x,n,se,si));
}