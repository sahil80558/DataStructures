#include<stdio.h>
int flag=0;
void isComposite(int n,int i){
	if(i>n)return;
	if(n%i==0)
		flag++;
	isComposite(n,i+1);
}
void show(int n){
	if(n>100)return;
	isComposite(n,2);
	if(flag>=2)
		printf("%d\n",n);
	flag=0;
	show(n+1);
	
}
void main(){
	show(2);
}