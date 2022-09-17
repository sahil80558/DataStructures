#include<stdio.h>
#include<math.h>
int c=0;
int a=0;
void isArmstong(int n){
	if(n<=0)return;
	a=a+(pow(n%10,c));
	isArmstong(n/10);	
}
void show(int n){
	isArmstong(n);
	if(a==n)
		printf("Armstrong");
	else
		printf("Not Armstrong");
}
void count(int n){
	if(n<=0)return;
	c++;
	count(n/10);
}
void main(){
	int n=1635;
	count(n);
	show(n);
	// printf("%d\n",c);
}