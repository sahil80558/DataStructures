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
void selectionS(){
	struct Node *min;
	struct Node *temp;
	struct Node *temp2;
	int t;
	for(temp=start;temp->next!=NULL;temp=temp->next){
		min=temp;
		for(temp2=temp->next;temp2!=NULL;temp2=temp2->next){
			if(min->data>temp2->data)
				min=temp2;
		}
		if(temp!=min){
			t=temp->data;
			temp->data=min->data;
			min->data=t;
		}	
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
	selectionS();
	showAll();
}