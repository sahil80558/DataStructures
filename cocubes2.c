#include<stdio.h>
int LargeSmallSum(int x[],int length){
	int a=length/2+1;
	int b=length/2;
	int m[a];
	int n[b];
	int j=0;
	int k=0;
	for(int i=0;i<length;i++){
		if(i%2==0)m[j++]=x[i];
		else n[k++]=x[i];
	}
	int max=m[0];
	int max2=m[0];
	int min=n[0];
	int min2=n[0];
	for(int i=1;i<a;i++){
			if(m[i]>max){
			max2=max;
			max=m[i];
		  }
		else if(max2<n[i] || max==max2){
			max2=m[i];
		} 
	}
	for(int i=1;i<b;i++){
		if(n[i]<min){
			min2=min;
			min=n[i];
		}
		else if(min2>n[i] || min2==min){
			min2=n[i];
		}
	}	
    return min2+max2;
}
void main(){
	int arr[]={1,8,0,2,3,5,6};
	int length=6;
	// LargeSmallSum(arr,length);
	printf("%d\n",LargeSmallSum(arr,length));
}