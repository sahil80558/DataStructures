#include<stdio.h>
void main(){
	int x[]={10,3,12,5,7,12};
	int n=sizeof(x)/sizeof(int);
	int c1=0;
	int c2=0;
	for(int i=0;i<n;i++){
		if(x[i]%2==0)c1++;
	    else c2++;
	}
	printf("Even=%d\n",c1);
	printf("Odd=%d\n",c2);
}