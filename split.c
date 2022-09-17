#include<stdio.h>
int k=0;
void show(int i){
	if(i<=0)return;
	show(i/10);
	k=i%10;
	printf("%d\n",k);
}
void main(){
	int n;
	// printf("Enter Any no.\n");
	// scanf("%d\n",&n);
	show(10045);
}