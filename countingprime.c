#include<stdio.h>
int flag=0;
int c=0;
void isPrime(int n,int i){
	if(i>n/2)return;
	if(n%i==0)
		flag++;
	isPrime(n,i+1);
}
void show(int a,int b){
	if(a>b)return;
	isPrime(a,2);
	if(flag==0)
		c++;
	flag=0;
	show(a+1,b);
	
}
void main(){
	show(2,20);
	printf("%d",c);
}