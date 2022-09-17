#include<stdio.h>
int a=-1;
int a1=1;
int s=0;
void show(int i,int j){
	if(i>j)return;
	s=a+a1;
	a=a1;
	a1=s;
	printf("%d\n",s);
	show(i+1,j);
	
}
void main(){
	show(1,10);
	// printf("%d",c);
}