#include<stdio.h>
void main(){
	int x[]={2,3,4,5,6,7};
	int n=sizeof(x)/sizeof(int);
	int max=x[0];
	int min=x[0];
	for(int i=0;i<n;i++){
		if(x[i]>max)max=x[i];
		if(x[i]<min)min=x[i];
	}
	printf("Minimun=%d\n",min);
	printf("Maximum=%d\n",max);
}