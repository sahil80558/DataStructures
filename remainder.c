#include<stdio.h>
int c;
int x=0;
void show(int a,int b){
	c=a;
	if(c>=b){
		c=c-b;
		x++;
		show(c,b);
	}
}
void main(){
	int a=25;
	int b=3;
	// printf("Enter no.1\n");
	// scanf("%d\n",&a);
	// printf("Enter no.2\n");
	// scanf("%d\n",&b);
	show(a,b);
	printf("Quotient=%d\n",x);
	printf("Remainder=%d",c);
}