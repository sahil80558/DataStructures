#include<stdio.h>
#include<stdbool.h>
int f=0;
void show(int n,int i){
		if(i>n/2)return;
		if(n%i==0)f++;
		show(n,i+1);
}
void isPrime(int i,int n){
	if(i>n)return;
	f=0;
	show(i,2);
		if(f==0)
		    printf("%d\n",i);
		isPrime(i+1,n);
	}
void main(){
		isPrime(2,20);
	}