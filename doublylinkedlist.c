#include<stdio.h>
#include<stdlib.h>
int c=0;
int countNode();
void deleteAtE();
void deleteAtB();
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
void insertAtS(int p,int x){
	c=0;
	if(p<=1){
		insertAtB(x);
		return;
	}
	if(p>countNode()){
		insertAtE(x);
		return;
	}
    struct Node *newNode=malloc(sizeof(struct Node));
    struct Node *temp=start;
	newNode->data=x;
	for(int i=1;i<p-1;i++)
		temp=temp->next;
	newNode->prev=temp;
	newNode->next=temp->next;
	temp->next->prev=newNode;
	temp->next=newNode;
}
int countNode(){
	if(start==NULL){
		printf("List is Empty");
		return 0;
	}
	struct Node *temp=start;
	while(temp!=NULL){
		c++;
		temp=temp->next;
	}
	return c;
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
void showAllR(){
	struct Node *temp=end;
	if(start==NULL){
		printf("List is Empty");
		return;
	}
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->prev;
	}
}
void deleteAtB(){
	if(start==NULL){
		printf("List is Empty");
		return;
	}
	struct Node *temp=start;
	start=start->next;
	free(temp);
}
void deleteAtE(){
	if(start==NULL || start->next==NULL){
		deleteAtB();
		return;
	}
	struct Node *temp=end;
	end=end->prev;
	end->next=NULL;
	free(temp);
}
void deleteAtS(int p){
	c=0;
	if(p==1){
		deleteAtB();
		return;
	}
	if(p==countNode()){
		deleteAtE();
		return;
	}
	struct Node *temp=start;
	for(int i=1;i<p;i++)
		temp=temp->next;
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(temp);
}

void main(){
	insertAtB(10);
	insertAtE(20);
	insertAtE(30);
	insertAtE(40);
	insertAtE(50);
	insertAtE(60);
	showAll();
	printf("\n------------------\n");
	// insertAtS(7,555);
	deleteAtS(4);
	showAll();
	
	// printf("%d\n",countNode());
}
