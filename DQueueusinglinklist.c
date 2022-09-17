#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void insertAtR(int);
void insertAtF(int);
int deleteAtB();
int deleteAtF();
int peekF();
int peekR();
bool isEmpty();
bool isFull();
void showAll();
struct Node{
	int data;
	struct Node *next;
};
	struct Node *front=NULL;
	struct Node *rear=NULL;
void insertAtF(int x){
	struct Node *newNode=malloc(sizeof(struct Node));
	newNode->data=x;
	newNode->next=front;
	front=newNode;
}
void insertAtR(int x){
	struct Node *newNode=malloc(sizeof(struct Node));
	newNode->data=x;
	newNode->next=NULL;
	if(rear==NULL)
		rear=front=newNode;
	rear->next=newNode;
	rear=newNode;
}
int deleteAtF(){
	if(isEmpty()){
		printf("Queue is Empty\n");
		exit(0);
	}
	int a=front->data;
	front=front->next;
	return a;
}
int deleteAtR(){
	if(isEmpty()){
		printf("Queue Is Empty\n");
		exit(0);
	}
	int a=rear->data;
	struct Node *temp=front;
	while(temp->next->next!=NULL)
		temp=temp->next;
	free(temp->next);
	temp->next=NULL;
	rear=temp;
	return a;
}
bool isEmpty(){
	if(rear==NULL || front==NULL)return true;
	return false;
}
int peekF(){
	if(isEmpty()){
		printf("Queue Is Empty\n");
		exit(0);
	}
	return front->data;
}
int peekR(){
	if(isEmpty()){
		printf("Queue Is Empty\n");
		exit(0);
	}
	return rear->data;
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
	insertAtR(10);
	insertAtR(20);
	insertAtR(30);
	insertAtR(40);
	insertAtF(555);
	showAll();
	printf("------------\n");
	printf("%d\n",peekF());
	printf("%d\n",peekR());
	printf("------------\n");
	// printf("%d\n",deQueue());
	// deQueue();
	// printf("------------\n");
	showAll();
	// printf("%d\n",peek());
	// printf("%d\n",peek());
	// printf("%d\n",peek());
}