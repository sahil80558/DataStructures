#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void insertAtE(int);
void showAll1();
void showAll2();
struct Node{
	int data;
	struct Node *xor;
};
	struct Node *start=NULL;
	struct Node *end=NULL;

void insertAtE(int x){
	struct Node *newNode=malloc(sizeof(struct Node));
	newNode->data=x;
	if(start==NULL){
		newNode->xor=0;
		start=end=newNode;
		return;
	}
	end->xor=(struct Node*)((uintptr_t)end->xor ^(uintptr_t)newNode);
	newNode->xor=(struct Node*)((uintptr_t)end ^ (uintptr_t)0);
	end=newNode;
}
void showAll1(){
	if(start==NULL){
		printf("List is empty");
		return;
	}
	struct Node *temp=start;
	struct Node *prev=0;
	struct Node *prev1;
	while(temp!=end){
		printf("%d\n",temp->data);
		prev1=temp;
		temp=(struct Node*)((uintptr_t)prev ^ (uintptr_t)temp->xor);
		prev=prev1;
	}
	printf("%d\n",temp->data);
}
void showAll2(){
	if(start==NULL){
		printf("List is empty");
		return;
	}
	struct Node *temp=end;
	struct Node *prev=0;
	struct Node *prev1;
	while(temp!=start){
		printf("%d\n",temp->data);
		prev1=temp;
		temp=(struct Node*)((uintptr_t)prev ^(uintptr_t)temp->xor);
		prev=prev1;
	}
	printf("%d\n",temp->data);
}
void main(){
	insertAtE(10);
	insertAtE(20);
	insertAtE(30);
	insertAtE(40);
	insertAtE(50);
	showAll1();
	showAll2();
}