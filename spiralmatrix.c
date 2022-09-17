#include<stdio.h>
void spiral(int x[3][3],int r,int c){
	int i=0,sri=0,sci=0;
	while(sri<r && sci<c){
		for(i=sci;i<c;i++)
			printf("%d ",x[sri][i]);
		sri++;
		for(i=sri;i<r;i++)
			printf("%d ",x[i][c-1]);
		c--;
		if(sri<r)
			for(i=c-1;i>=sci;i--)
				printf("%d ",x[r-1][i]);
		r--;
		if(sci<c)
			for(i=r-1;i>=sri;i--)
				printf("%d ",x[i][sci]);
		sci++;
	}
}
void main(){
	int x[3][3]={
		{1,2,3},
		{8,9,4},
		{7,6,5}};
	spiral(x,3,3);
}