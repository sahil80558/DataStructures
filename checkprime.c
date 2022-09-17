#include<stdio.h>
int m=0,flag=0,i;
void show(int i,int n){
	if(i>n/2)return;
	if(n%i==0 || n==0 || n==1){
		flag++;
	}
	show(i+1,n);
}
void isPrime(int n){
	show(2,n);
	if(flag==0)
		printf("Is prime");
	else{
		printf("Is not prime");
	}
}
void main(){
	isPrime(4);
}