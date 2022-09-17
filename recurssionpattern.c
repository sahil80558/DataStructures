#include<stdio.h>
int s=65;
int k=1;
void space(int i)
{
	if(i==10)return;
	printf(" ");
	space(i+1);
}
void show(int i,int j){
	if(i==10)return;
	// if(i==1)space(k);
	if(i+j==6 || i-j==4 || j-i==4 || i+j==14)
	    printf("* ");
	else	
	    printf("  ");
	if(j==9){
		printf("\n");		
	    // k=(i<=4)?++k:--k;
		i++;
		j=0;
		s++;
		// space(k);
	}
	show(i,j+1);
}
void main()
{
	show(1,1);
}
// #include<stdio.h>
// int k=2;
// int m=6;
// int a=0;
// int a1=10;

// void space(int i)
// {
	// if(i>=11)return;
	// printf(" ");
	// space(i+1);
// }
// void show(int i,int j){
	// if(i<=0)return;
	// if(i==11)space(i);
	// if(j%2==0)
	// printf("* ");
    // else{
		// if(j<=m){
		// printf("%d ",++a);
		// }
	    // else{
		// printf("%d ",a1++);
		// k++;
		// }
	// }
	// if(j==i){
		// printf("\n");
		// j=0;
		// i-=4;
		// a1=a1-k;
		// k=1;
		// m=m/2;
		// space(i);
	// }
	// show(i,j+1);
// }
// void main()
// {
	// show(11,1);
// }
// int c=1;
// int n=1;
// void show(int i,int j){
	// if(i==6)return;
	// if(i%2==0){
		// n=c;
	// printf("%d",n++);
	// c++;
	// }
	// else{
		// n=c;
	// printf("%d",n);
	// c++;
	// }
		
	// if(j==i){
		// printf("\n");
		// j=0;
		// i++;
	// }
	// show(i,j+1);	
// }
// void main(){
	// show(1,1);
// }

// #include<stdio.h>
// int k=1;
// int m=6;
// int n;
// int a1=1;

// void show(int i,int j){
	// if(i>=7)return;
	// if(i%2==0){
	// printf("%d ",n--);
	// a1++;
	// }
    // else{
		// printf("%d ",a1++);
	// }
	// if(j==i){
		// printf("\n");
		// j=0;
		// i++;
		// n=(i*(i+1))/2;
	// }
	// show(i,j+1);
// }
// void main()
// {
	// show(1,1);
// }
