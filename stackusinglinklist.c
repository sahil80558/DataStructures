#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
void push(int x);
int peek();
int pop();
bool isEmpty();

struct Node{
	int data;
	struct Node *next;
};
struct Node *top=NULL;

void push(int x){
	struct Node *newNode=malloc(sizeof(struct Node));
	if(newNode==NULL){
		printf("space not available");
		return;
	}
	newNode->data=x;
	newNode->next=top;
	top=newNode;
}
int peek(){
	int a;
	if(top==NULL){
		printf("stack is empty");
		return 0;
	}
	a=top->data;
	return a;
}
int pop(){
	int a;
	if(top==NULL){
		printf("stack is empty");
		return 0;
	}
	struct Node *temp=top;
	a=top->data;
	top=top->next;
	free(temp);
	return a;
}
bool isEmpty(){
	if(top==NULL)return true;
	return false;
}
void main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	printf("%d\n",peek());
	printf("%d\n",peek());
	printf("%d\n",peek());
	printf("%d\n",peek());
	printf("%d\n",peek());
	printf("%s",(isEmpty())?"true":"false");
	printf("----------\n");
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%s",(isEmpty())?"true":"false");
}