#include<stdio.h>
int c=0;
struct Farm{
	int hens;
	int cows;
};
int MaxLegs(struct Farm farms[],int m){
	for(int i=0;i<m;i++){
		c=farms[i].hens*2+farms[i].cows*4;
	}
	return c;
}
void main(){
	struct Farm farms[1]; 
	farms->hens=46;
	farms->cows=94;
	printf("%d",MaxLegs(farms,1));
}
