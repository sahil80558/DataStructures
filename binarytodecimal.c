#include<stdio.h>
void main(){
	int x=111;
	int s=0;
	int j=0;
	int n=0;
	while(x>0){
		n=x%10;
		s=s+(n<<j++);   
		x=x/10;
	}
	printf("%d",s);
}