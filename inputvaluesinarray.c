#include<stdio.h>
#define capacity 5
void main(){
	int input[capacity];
	printf("Enter Values in Array\n");
	for(int i=0;i<capacity;i++)
		scanf("%d",&input[i]);
	for(int i=0;i<capacity;i++)
		printf("%d ",input[i]);
}