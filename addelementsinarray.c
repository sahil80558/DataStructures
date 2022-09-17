#include<stdio.h>
void main(){
	int x[]={10,2,3,4,1,2};
	int n=sizeof(x)/sizeof(int);
	int s=0;
	for(int i=0;i<n;i++)
		s=s+x[i];
	printf("%d",s);
}