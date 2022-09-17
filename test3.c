#include<stdio.h>
int fun(int a,int b){
	a=a+b;
	b=a-b;
	return b+a;
}
void main(){
	int a,b;
	a=1;
	b=1;
	a=(a^1)&(1)+(b^1)&(1);
    printf("%d",a+b);
}