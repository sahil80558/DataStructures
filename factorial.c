#include<stdio.h>
int c=1;
int a=0;
void show(int n,int i){
	if(i>n)return;
	show(n,i+1);
	 c =c*i;
	 // a=a+c/i;
}                                      // // factorial
void main(){
	int n;
	printf("Enter Any No.");
	scanf("%d/n",&n);
	show(n,1);
	printf("%d",c);
}
// int c=0;
// int k;
// int s=0;
// void show(int n,int i){
	// if(i>k)return;
	// if(i%2==0){
		// c=n*6;
		// s=s+c;
		// n++;
	// }
	// else{
	    // c=n*7;
		// s=s+c;
	// }
	// show(n,i+1);
// }
// void main(){
	// printf("Enter any no \n");
	// scanf("%d/n",&k);
	// printf("%d",s);
// }


