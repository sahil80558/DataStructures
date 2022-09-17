#include<stdio.h>
void sum(int a[],int b[],int c[],int m1,int m2);
void split(int a[],int n){
	if(n<2)return;
	int m1=n/2;                // dividing 1 in 2
	int m2=n-m1;               
	int b[m1];                 // creating splitted array
	int c[m2];                 // creating splitted array
	
	for(int i=0;i<m1;i++){
		b[i]=a[i];             //splitted array 1
	}
	for(int i=0;i<m2;i++){
		c[i]=a[i+m1];          //splitted array 2
	}
	split(b,m1);
	split(c,m2);
	sum(a,b,c,m1,m2);	
}
void sum(int a[],int b[],int c[],int m1,int m2){
	int i,j,k;
	for(i=0,j=0,k=0;i<m1 && j<m2;){
		if(b[i]<c[j])
			a[k++]=b[i++];     // adding lesser values to sorted array
		else
			a[k++]=c[j++];     // adding lesser values to sorted array
	}
	while(i<m1)a[k++]=b[i++];
	while(j<m2)a[k++]=c[j++];	
}
void main(){
	int a[]={100,80,88,8,12,77,56,22,55};
	int n=sizeof(x)/sizeof(int);
	split(a,n);
	for(int i=0;i<9;i++){
		printf("%d ",a[i]);   //printing sorted array
	}
}