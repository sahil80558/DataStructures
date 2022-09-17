#include<stdio.h>
#include<stdlib.h>
int c=0;
void insertAtB(int x);
void insertAtE(int x);
void insertAtS(int p,int x);
void deleteAtE();
void deleteAtB();
void deleteAtS(int p);
void showAll();
int countNode();
struct Node{
	int data;
	struct Node *next;
};
struct Node *start=NULL;
void insertAtB(int x){
	struct Node *newNode=malloc(sizeof(struct Node));
	if(newNode==NULL){
		printf("Insuffiecient Space");
		return;
	}
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
	newNode->data=x;
	newNode->next=NULL;
	struct Node *temp=start;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
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
	newNode->data=x;
	struct Node *temp=start;
	for(int i=1;i<p-1;i++){
		temp=temp->next;
	}
		newNode->next=temp->next;
		temp->next=newNode;
}
void deleteAtB(){
	if(start==NULL){
		printf("List is empty");
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
	struct Node *temp=start;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
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
	struct Node *temp2;
	for(int i=1;i<p-1;i++){
		temp=temp->next;
	}
	temp2=temp->next->next;
	free(temp->next);	
	temp->next=temp2;	
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
int countNode(){
	struct Node *temp=start;
	while(temp!=NULL){
		temp=temp->next;
		c++;
	}
	return c;
}
void revDemo(struct Node *temp){
	if(temp==NULL)return;
	revDemo(temp->next);
	printf("%d\n",temp->data);
}
void rev(){
	revDemo(start);
}
void revList(){
	struct Node *temp1=start;
	struct Node *temp2=NULL;
	struct Node *temp3;
	
	while(temp1!=NULL){
		temp3=temp1->next;
		temp1->next=temp2;
		temp2=temp1;
		temp1=temp3;
	}
	start=temp2;
}
int searchNode(int x){
	struct Node *temp=start;
	int index =-1;
	if(start==NULL)return index;
	while(temp!=NULL){
		index++;
		if(temp->data==x){
			return index;
		}
		temp=temp->next;
	}
	return -1;
}
void main(){
	insertAtE(10);
	insertAtE(20);
	insertAtE(30);
	insertAtE(40);
	insertAtE(50);
	showAll();
	printf("------------------------\n");
	// printf("%d\n",searchNode(50));
	// rev();
	// deleteAtE();
	deleteAtB();
	deleteAtB();
	deleteAtB();
	deleteAtB();
	// deleteAtB();
	// c=0;
	// printf("%d\n",countNode());
	// insertAtS(2,555);
	showAll();
}
