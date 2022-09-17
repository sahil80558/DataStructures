#include<stdio.h>
#include<stdlib.h>
void insertAtB(int);
void showAll();
struct Node{
	int data;
	struct Node *next;
};
struct Node *start=NULL;
void main(){
	insertAtB(10);
	insertAtB(20);
	showAll();
}
void insertAtB(int x){
	struct Node *temp1=malloc(sizeof(struct Node));
	if(temp==NULL){
		printf("Insuffiecient Space");
		return;
	}
	temp1->data=x;
	temp1->next=start;
	start=temp1;
}
void showAll(){
	struct Node *temp=start;
	if(start==NULL){
		printf("List is empty");
		return;
	}
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
