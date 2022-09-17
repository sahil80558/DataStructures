#include<stdio.h>
#include<stdlib.h>
int c=0;
struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};
	struct Node *start=NULL;
	struct Node *end=NULL;
void insertAtB(int x){
	struct Node *newNode= malloc(sizeof(struct Node));
	if(newNode==NULL){
		printf("Space Not Available");
		return;
	}
	newNode ->data=x;
	newNode ->prev=NULL;
	newNode ->next=start;
	if(start!=NULL)start->prev=newNode;
	else end=newNode;
	start=newNode;	
}
void insertAtE(int x){
	if(start==NULL){
		insertAtB(x);
		return;
	}
	struct Node *newNode= malloc(sizeof(struct Node));
	if(newNode==NULL){
		printf("Space Not Available");
		return;
	}
	newNode->data=x;
	newNode->next=NULL;
	newNode->prev=end;
	end->next=newNode;
	end=newNode;
}
void showAll(){
	struct Node *temp=start;
	if(start==NULL){
		printf("List is Empty");
		return;
	}
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int countNodes(){
	c=0;
	struct Node *temp=start;
	if(start==NULL){
		return 0;
	}
	while(temp!=NULL){
		c++;
		temp=temp->next;
	}
	return c;
}
void insertionS(){
	int value;
	struct Node *i;
	struct Node *j;

	for(i=start->next;i!=NULL;i=i->next){
		value=i->data;
		for(j=i;j->prev!=NULL && j->prev->data>value ;j=j->prev){
				j->data=j->prev->data;
		}
			j->data=value;
	}
}
void main(){
	insertAtE(2);
	insertAtE(1);
	insertAtE(6);
	insertAtE(4);
	insertAtE(3);
	showAll();
	printf("-------------\n");
    insertionS();
	showAll();
}