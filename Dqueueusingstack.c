#include<stdio.h>
#include<stdbool.h>
#define capacity 5
#include<stdlib.h>
void insertAtF(int);
void insertAtR(int);
int peekF();
int peekR();
int deleteAtF();
int deleteAtR();
bool isEmpty();
bool isFull();
int f=-1;
int r=-1;
int DQueue[capacity];

void insertAtR(int x){
	if(isFull()){
		printf("Queue is full\n");
		exit(0);
	}
	if(f==-1)++f;
	DQueue[++r]=x;
}

void insertAtF(int x){
	if(f<=0){
		printf("Queue is full\n");
		exit(0);
	}
	DQueue[--f]=x;
}
int peekR(){
	if(isEmpty()){
		printf("Queue is Empty\n");
		exit(0);
	}
	return DQueue[r];
}
int peekF(){
	if(isEmpty()){
		printf("Queue is Empty\n");
		exit(0);
	}
	return DQueue[f];
}
int deleteAtF(){
	if(isEmpty()){
		printf("Queue Is Empty\n" );
		exit(0);
	}
	return DQueue[f++];
}
int deleteAtR(){
	if(isEmpty()){
		printf("Queue Is Empty\n" );
		exit(0);
	}
	return DQueue[r--];
}
bool isFull(){
	if(r==capacity-1)return true;
	return false;
}
bool isEmpty(){
	if(r==-1 || f>r)return true;
	return false;
}
void showAll(){
	for(int i=f;i<=r;i++)
		printf("%d\n",DQueue[i]);
}
void main(){
	insertAtR(10);
	insertAtR(20);
	insertAtR(30);
	// insertAtB(40);
	// insertAtB(50);
	printf("%d\n",peekF());
	printf("%d\n",peekR());
	// printf("%d\n",deleteAtE());
	// deleteAtE();
	// insertAtB(555);
	// insertAtB(111);
	showAll();
}