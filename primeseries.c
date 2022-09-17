#include<stdio.h>
int flag=0;
void isPrime(int n,int i){
	if(i>n/2)return;
	if(n%i==0)
		flag++;
	isPrime(n,i+1);
}
void show(int n){
	if(n>100)return;
	isPrime(n,2);
	if(flag==0)
		printf("%d\n",n);
	flag=0;
	show(n+1);
	
}
void main(){
	show(2);
}