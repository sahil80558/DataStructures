#include<stdio.h>
int sum=0;
void show(int n){
	if(n>10)return;
	printf("%d\n",n);
	sum=sum+n;
	show(n+1);
}
void main(){
	show(1);
	printf("\nSum=%d",sum);
}