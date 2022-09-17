#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void enQueue(int);
int deQueue();
int peek();
bool isEmpty();
bool isFull();
void showAll();
struct Node{
	int data;
	struct Node *next;
};
	struct Node *front=NULL;
	struct Node *rear=NULL;

void enQueue(int x){
	struct Node *newNode=malloc(sizeof(struct Node));
	newNode->data=x;
	newNode->next=NULL;
	if(rear==NULL){
		rear=front=newNode;
	}
	rear->next=newNode;
	rear=newNode;
}
int deQueue(){
	if(isEmpty()){
		printf("Queue is Empty\n");
		exit(0);
	}
	struct Node *temp=front;
	int a=front->data;
	front=front->next;
	free(temp);
	return a;
}
bool isEmpty(){
	if(rear==NULL || front==NULL)return true;
	return false;
}
int peek(){
	if(isEmpty()){
		printf("Queue Is Empty\n");
		exit(0);
	}
	return front->data;
}
void showAll(){
	if(isEmpty()){
		printf("Queue is Empty");
		exit(0);
	}
	struct Node *temp=front;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void main(){
	enQueue(10);
	enQueue(20);
	enQueue(30);
	enQueue(40);
	enQueue(50);
	showAll();
	printf("------------\n");
	// printf("%d\n",deQueue());
	deQueue();
	printf("------------\n");
	showAll();
	// printf("%d\n",peek());
	// printf("%d\n",peek());
	// printf("%d\n",peek());
}