#include<stdio.h>        // couting sort with negative value
void show(int x[],int n){
	int i;
	int y[n];
	int max=x[0];
	int min=x[0];
	
	for(i=1;i<n;i++)
		if(min>x[i])min=x[i];   // finding minimum value
	for(i=1;i<n;i++)
		if(max<x[i])max=x[i];   // finding maximum value
	max++;                      // increment in maximum     
	int a[max-min];             // creating array A
	for(i=0;i<max-min;i++)
		a[i]=0;                 // assigning 0 to all indexes 
	for(i=0;i<n;i++)
		a[x[i]-min]++;          // incremnet in A index and adding minimum value to make zero 
	for(i=1;i<max-min;i++)
		a[i]+=a[i-1];           // adding previous and current index
	for(i=0;i<n;i++)
		y[a[x[i]-min]-=1]=x[i]; // assigning value to Y array subtracting minimum value to make same array value 
	for(i=0;i<n;i++)
		x[i]=y[i];	            // assinging value to the X array
}
void main(){
	int x[]={10,-60,2,-2,5,9};
	int n=sizeof(x)/sizeof(int);
	show(x,n);
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}