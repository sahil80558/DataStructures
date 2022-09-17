#include<stdio.h>
int c=0;
void show(int n){
	if(n<=0)return;
	c=c+(n%10);
	show(n/10);
}
void main(){
	show(10115);
	printf("%d\n",c);
}