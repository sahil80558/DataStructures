#include<stdio.h>
#include<stdlib.h>
int i=0;
int s=0;
struct Node{
	int data;
	struct Node *next;
};
struct Node *start=NULL;

void insertAtB(int x){
	struct Node *newNode=malloc(sizeof(struct Node));
		newNode->data=x;
	    newNode->next=start;
     	start=newNode;
}
void insertAtE(int x){
	if(start==NULL){
		insertAtB(x);
		return;
	}
	struct Node *newNode=malloc(sizeof(struct Node));
	struct Node *temp=start;
	newNode->data=x;
	newNode->next=NULL;
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=newNode;
}
void showAll(){
	struct Node *temp=start;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int rev(struct Node *temp){
	if(temp==NULL)return 0;
	rev(temp->next);
	s=s+(temp->data<<i++);
}
int binarytodecimal(){
	rev(start);
}
void main(){
	insertAtE(1);
	insertAtE(0);
	insertAtE(1);
	insertAtE(1);
	printf("%d",binarytodecimal());
	// showAll();
}