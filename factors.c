#include<stdio.h>
int c=0;
void show(int n,int i){
	if(i==n)return;
	if(n%i==0)
		printf("%d\n",i);
	show(n,i+1);	
}
void main(){
	show(7,1);
	// printf("%d\n",c);
}