#include<stdio.h>
void rsort(int x[],int n);
void show(int x[],int n,int div);
void rsort(int x[],int n){
	int i;
	int max=x[0];
	int min=x[0];
	for(i=1;i<n;i++)
		if(min>x[i])min=x[i];
	for(i=0;i<n;i++)
		x[i]-=min;
	for(i=1;i<n;i++)
		if(max<x[i])max=x[i];       // finding maximum in X array
	for(i=1;i<=max;i*=10)
		show(x,n,i);                // passing div values to show
    for(i=0;i<n;i++)
		x[i]+=min;
}
void show(int x[],int n,int div){
	int y[n];
	int i;
	int a[10]={0};
	
	for(i=0;i<n;i++)
		a[x[i]/div%10]++;           // increment in A array
	for(i=1;i<10;i++)
		a[i]=a[i]+a[i-1];           // adding previous and current index
	for(i=n-1;i>=0;i--)
		y[a[x[i]/div%10]-=1]=x[i];  // assinging sorted value to the Y array
	for(i=0;i<n;i++)
		x[i]=y[i];                  // assinging value to the X array
}
void main(){
	int x[]={-1000,500,40,-6,90};
	int n=sizeof(x)/sizeof(int);
	rsort(x,n);
	for(int i=0;i<n;i++)
		printf("%d ",x[i]);
}