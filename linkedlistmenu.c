#include<stdio.h>
#include<stdlib.h>
int countNode();
int c=0;
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
	printf("Data Inserted");
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
	printf("Data Inserted\n");
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
	if(p<=1){
		deleteAtB(p);
		return;
	}
	if(p>countNode()){
		deleteAtE(p);
		return;
	}
	struct Node *temp=start;
	struct Node *temp2;
	for(int i=1;i<p-1;i++){
		temp=temp->next;
	}
	temp2=temp->next;
	temp->next=temp->next->next;
	free(temp2);	
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

void main(){
	
    int count,choice,data,position;
    M:
    printf("\n--------------------Menu----------------------\n");
    printf("1.Insert Node at Begining\n");
    printf("2.Insert Node at Ending\n");
    printf("3.Insert Node at Specific Position\n");
    printf("4.Delete Node from Begining\n\n");
    printf("5.Delete Node from Ending\n");
    printf("6.Delete Node from Specific Position\n");
    printf("7.Couting Node\n");
    printf("8.Show All\n");
    printf("Enter Your Choice\n");
    scanf("%d",&choice);
	
switch(choice){
	case 1:
	printf("Enter Data\n");
	scanf("%d",&data);
	insertAtB(data);
	goto M;
	case 2:
	printf("Enter Data\n");
	scanf("%d",&data);
	insertAtE(data);
	goto M;
	case 3:
	printf("Enter Data");
	scanf("%d",&data);
	printf("Enter Position");
	scanf("%d",&position);
	insertAtS(position,data);
	goto M;
	case 4:
	deleteAtB();
	goto M;
	case 5:
	deleteAtE();
	goto M;
	case 6:
	printf("Enter Position");
	scanf("%d",&position);
	deleteAtS(position);
	goto M;
	case 7:
	c=0;
	printf("%d\n",countNode());
	goto M;
	case 8:
	showAll();
	goto M;
	default:
	printf("Invalid Choice");
	goto M;
}
}

