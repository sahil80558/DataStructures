#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define capacity 5
void enqueue(int);
int dequeue();
int peekF();
int peekR();
void showAll();
bool isEmpty();
bool isFull();
int CQueue[capacity];
int f=-1;
int r=-1;
void main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	printf("Deleted=%d\n",dequeue());
	printf("Deleted=%d\n",dequeue());
	enqueue(60);
	enqueue(70);
	printf("Front=%d\n",peekF());
	printf("Rear=%d\n",peekR());
	showAll();
}
void enqueue(int x){
	if(isFull()){
		printf("Queue is Full");
		exit(0);
	}
	if(f==-1)f++;
	if(r<capacity)CQueue[++r]=x;
	if(r>=capacity && f>0){
		r=-1;
		CQueue[++r]=x;
	}
}
int dequeue(){
	if(isEmpty()){
		printf("Queue is Empty");
		exit(0);
	}
	return CQueue[f++];
}
int peekF(){
	if(isEmpty()){
		printf("Queue is Empty");
		exit(0);
	}
	return CQueue[f];
}
int peekR(){
	if(isEmpty()){
		printf("Queue is Empty");
		exit(0);
	}
	return CQueue[r];
}
bool isEmpty(){
	if(f==-1)return true;
	return false;
}
bool isFull(){
	if((f==0 && r==capacity-1)||(r==f-1))return true;
	return false;
}
void showAll(){
	if(f==-1){
		printf("Queue is Empty\n");
		exit(0);
	}
	if(r>=f){
		for(int i=f;i<=r;i++)
			printf("%d\n",CQueue[i]);
		return;
	}
	else{
		for(int i=f;i<capacity;i++)
			printf("%d\n",CQueue[i]);
		for(int i=0;i<=r;i++)
			printf("%d\n",CQueue[i]);
	}
}