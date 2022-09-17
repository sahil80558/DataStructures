#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
# define capacity 5
void enqueue(int);
int peek();
int dequeue();
bool isEmpty();
bool isFull();
int queue[capacity];
int r=-1;
int f=-1;
void enqueue(int x){
	if(isFull()){
		printf("Queue is Full\n");
		exit(0);
	}
	if(f==-1)++f;
	queue[++r]=x;
}
int peek(){
	if(isEmpty()){
		printf("Queue is Empty\n");
		exit(0);
	}
	return queue[f];
}
int dequeue(){
	if(isEmpty()){
		printf("Queue is Empty");
		exit(0);
	}
	return queue[f++];
}
bool isEmpty(){
	if(r==-1 || f>r)return true;
	return false;
}
bool isFull(){
	if(r==capacity-1)return true;
	return false;
}
void showAll(){
	int i;
	for(i=f;i<=r;i++)
		printf("%d\n",queue[i]);
}
void main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	showAll();
	printf("\n");
	printf("%d\n",peek());
	printf("%d\n",dequeue());
	printf("%d\n",dequeue());
	printf("%d\n",peek());
	printf("\n");
	showAll();
}