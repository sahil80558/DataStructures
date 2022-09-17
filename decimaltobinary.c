#include<stdio.h>
int h=0;
int b=0;
int o=0;
void binary(int n){
	if(n<=0)return;
	binary(n/2);
	printf("%d",n%2);
}
void octal(int n){
	if(n<=0)return;
	octal(n/8);
	o=o*10+n%16;
}
void hexa(int n){
	if(n<=0)return;
	octal(n/16);
}
void main(){
	int n=13;
	binary(n);
	printf("Binary=%d",b);
	octal(n);
	printf("\noctal=%d",o);
	// hexa(n);
	// if(h==10)
	// printf("\nHexadecimal=A",);
	// printf("%d\n",c);
}