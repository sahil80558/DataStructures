#include<stdio.h>
#include<stdbool.h>
void display(int x[4][4],int n);
bool isValid(int x[4][4],int r,int c)
{
	int i,j;
	for(i=r;i>=0;i--)
		if(x[i][c])return false;
	
	// for(j=c;j>=0;j--)
		// if(x[r][j])return false;
	
	for(i=r,j=c;i>=0&&j>=0;i--,j--)
		if(x[i][j])return false;
	
	// for(i=r,j=c;j<=3&&i>=0;i--,j++)
		// if(x[i][j])return false;

	return true;
}
bool show(int x[4][4],int r){
	if(r>=4)return true;
	int j;
	for(j=0;j<4;j++){
			if(isValid(x,r,j)){
		           x[r][j]=1;
				   display(x,4);
	            if(show(x,r+1))return true;
		           x[r][j]=0;
				   display(x,4);
			}
		}
		return false;
}
void display(int x[4][4],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",x[i][j]);
		}
			printf("\n");
	}
			printf("\n");
			printf("\n");
}
void main()
{
	int i,j;
	int x[4][4]={0};
    show(x,0);
	display(x,4);
}