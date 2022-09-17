#include<stdio.h>
int c;
int m=6;
void swap(int i,int j,int x[]){
	if(i<=0)return;
			if(x[j]>x[j+1]){
				c=x[j];
				x[j]=x[j+1];
				x[j+1]=c;
			}	
	if(j==i){
		j=-1;
		i--;
	}
	swap(i,j+1,x);
}
void show(int i,int x[]){
	if(i==9)return;
	printf("%d ",x[i]);
	show(i+1,x);
}

void main()
{
	int x[]={8,7,6,10,4,3,2,1};
	swap(7,0,x);
	show(0,x);
}