#include<stdio.h>
#include<stdlib.h>
// void insertAtB(int);
// void insertAtE(int);
// void insertAtS(int,int);
// void deleteAtB();
// void deleteAtE();
// void deleteAtS(int);
// void showAll();
// void showAllR();
int countNodes();
int c=0;
struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};
struct Node *start;
struct Node *end;

struct Node* createNode(int x){
	struct Node *newNode=malloc(sizeof(struct Node));
	newNode->data=x;
	return newNode;
}
void insertAtB(int x){
	struct Node *newNode=createNode(x);
	if(newNode==NULL){
		printf("Space Not Available");
		return;
	}
	if(start==NULL){
		start=end=newNode->next=newNode->prev=newNode;
		return;
	}
	start->prev=newNode;
	newNode->prev=end;
	newNode->next=start;
	start=newNode;
    end->next=start;	
}
void insertAtE(int x){
	if(start==NULL){
		insertAtB(x);
		return;
	}
	struct Node *newNode=createNode(x);
	struct Node *temp=end;
	temp->next=newNode;
	newNode->prev=temp;
	newNode->next=start;
	start->prev=newNode;
	end=newNode;
}
void insertAtS(int p,int x){
	c=0;
	if(p<=1){
		insertAtB(x);
		return;
	}
	if(p>countNodes()){
		insertAtE(x);
		return;
	}
	struct Node *newNode=createNode(x);
	struct Node *temp=start;
	for(int i=1;i<p-1;i++)
		temp=temp->next;
	newNode->next=temp->next;
	newNode->prev=temp;
	temp->next->prev=newNode;
	temp->next=newNode;	
}
void deleteAtB(){
	if(start==NULL){
		printf("List is empty");
		return;
	}
	struct Node *temp=start;
	if(start==end){
		free(temp);
		start=end=NULL;
		return;
	}
	start->prev=end;
	start=start->next;
	end->next=start;
	free(temp);
}
void deleteAtE(){
	if(start==NULL || start==end){
		deleteAtB();
		return;
	}
	struct Node *temp=end;
	end=end->prev;
	end->next=start;
	start->prev=end;
	free(temp);
}
void deleteAtS(int p){
	if(p==1){
		deleteAtB();
		return;
	}
	else if(p==countNodes()){
		deleteAtE();
		return;
	}
	else if(p>countNodes() || p<1){
		printf("Invalid Position\n");
		return;
	} 
	struct Node *temp=start;
	// struct Node *temp2;
	for(int i=1;i<p;i++)
		temp=temp->next;
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(temp);
}
void showAll(){
	if(start==NULL){
		printf("List is Empty");
		return;
	}
	struct Node *temp=start;
	do{
		printf("%d\n",temp->data);
		temp=temp->next;
	}while(temp!=start);
}
void showAll2(int x){
	if(start==NULL){
		printf("List is Empty");
		return;
	}
	struct Node *temp=start;
	while(temp->data!=x){
		temp=temp->next;
		if(temp==start){
			printf("Data Not Found");
			return;
		}
	}
	struct Node *temp2=temp;
	do{
		printf("%d\n",temp->data);
		temp=temp->next;
	}while(temp!=temp2);
}
int countNodes(){
	c=0;
	if(start==NULL){
		printf("List is empty");
		return 0;
	}
	struct Node *temp=start;
	do{
		c++;
		temp=temp->next;
	}while(temp!=start);
	return c;
}
void main(){
	insertAtE(10);
	insertAtE(20);
	insertAtE(30);
	insertAtE(40);
	insertAtE(50);
	showAll();
	// deleteAtS(1);
	// deleteAt();
	// deleteAtB();
	printf("\n--------------------------\n");
	// insertAtE(40);
	// insertAtS(2,55);
	// insertAtS(5,66);
	// insertAtB(40);
	// printf("%d\n",*end);
	// printf("%d\n",*start);
	// printf("%d\n",countNodes());
	showAll2(30);
}