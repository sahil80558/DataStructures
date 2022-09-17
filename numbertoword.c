#include<stdio.h>
int c=0;
void show(int n){
	if(n<=0)return;
	show(n/10);
	c=n%10;
	if(c==0)
		printf("zero ");
	else if(c==1)
		printf("one ");
	else if(c==2)
		printf("two ");
	else if(c==3)
		printf("three ");
	else if(c==4)
		printf("four ");
	else if(c==5)
		printf("five ");
	else if(c==6)
		printf("six ");
	else if(c==7)
		printf("seven ");
	else if(c==8)
		printf("eight ");
	else if(c==9)
		printf("nine ");
}
void main(){
	// char x[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	show(12345);
}