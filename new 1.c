#include<stdio.h>
void show(int i,int j){
	if(i==0)return;
	printf("%d",j);
	if(j==i){
		printf("\n");
		j=0;
		i--;
	}
	show(i,j+i);
}
void main()
{
	show(5,1);
}