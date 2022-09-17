#include<stdio.h>
int c=0;
void isPalindrome(int n){
	if(n<=0)return;
	c=c*10+(n%10);
	isPalindrome(n/10);	
}
void show(int n){
	isPalindrome(n);
	if(c==n)
		printf("Is Palindrome");
	else
		printf("Not Palindrome");
}
void main(){
	show(232);
	// printf("%d\n",c);
}