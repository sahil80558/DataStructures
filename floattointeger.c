#include<stdio.h>
int c;
void show(float n){
	c=(int)n;
	printf("%d",c);
}
void main(){
	show(5.8);
}