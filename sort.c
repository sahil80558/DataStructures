#include<stdio.h>
void show(int x[],int y[],int z[],int n1,int n2){
	int i,j,k;
	for(i=0,j=0,k=0;i<n1 && j<n2;){
		if(x[i]<y[j])
			z[k++]=x[i++];
		else
			z[k++]=y[j++];
	}
	while(j<n2)z[k++]=y[j++];
	while(i<n1)z[k++]=x[i++];
}
void main(){
	int x[]={2,3,4,5,10};
	int y[]={10,20,21,22,23};
	int z[10];
	show(x,y,z,5,5);
	int i;
	for(i=0;i<10;i++){
		printf("%d\n",z[i]);
	}
		printf("%d\n",3/2);
}