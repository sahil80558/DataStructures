#include<stdio.h>
#include<stdlib.h>
int c=0;
int countNodes();
struct Node{
	int data;
	struct Node *next;
};
struct Node *start=NULL;
struct Node *end=NULL;

struct Node* cn(int x){
	struct Node *newNode=malloc(sizeof(struct Node));
	newNode->data=x;
	return newNode;
}

void insertAtB(int x){
	struct Node *newNode=cn(x);
	if(newNode==NULL){
		printf("Space Not Available");
		return;
	}
	if(start==NULL){
		start=end=newNode->next=newNode;
		return;
	}
	newNode->next=start;
	start=end->next=newNode;
}

void insertAtE(int x){
	struct Node *newNode=cn(x);
	if(newNode==NULL){
		printf("Space Not Available");
		return;
	}
	if(start==NULL){
		insertAtB(x);
		return;
	}
	newNode->next=start;
	end=end->next=newNode;
}
void insertAtS(int p,int x){
	if(p<=1){
		insertAtB(x);
		return;
	}
	if(p>countNodes()){
		insertAtE(x);
		return;
	}
	struct Node *newNode=cn(x);
	struct Node *temp=start;
	for(int i=1;i<p-1;i++)
		temp=temp->next;
	newNode->next=temp->next;
	temp->next=newNode;
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
		printf("List Is Empty");
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
void showrev(struct Node *temp){
	if(start==NULL){
		printf("List Is Empty");
		return;
	}
}
void deleteAtB(){
	if(start==NULL){
		printf("List Is Empty");
		return;
	}
	struct Node *temp=start;
	start=start->next;
	end->next=start;
	free(temp);
}
void deleteAtE(){
	if(start==NULL || start->next==start){
		deleteAtB();
		return;
	}
	struct Node *temp1=start;
	struct Node *temp2;
	do{
		temp2=temp1;
		temp1=temp1->next;
	}while(temp1->next!=start);
	end=temp2;
	temp2->next=start;
	free(temp1);
	
}
void deleteAtS(int p){
	if(p==1){
		deleteAtB();
		return;
	}
	if(p==countNodes()){
		deleteAtE();
		return;
	}
	struct Node *temp1=start;
	struct Node *temp2;
	for(int i=1;i<p-1;i++)
		temp1=temp1->next;
	temp2=temp1->next->next;
	free(temp1->next);
	temp1->next=temp2;
}
int countNodes(){
	if(start==NULL){
		printf("List Is Empty");
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
	
    int count,choice,data,position;
    M:
    printf("\n\n\n\n--------------------Menu----------------------\n\n\n");
    printf("1.Insert Node at Begining\n");
    printf("2.Insert Node at Ending\n");
    printf("3.Insert Node at Specific Position\n");
    printf("4.Delete Node from Begining\n");
    printf("5.Delete Node from Ending\n");
    printf("6.Delete Node from Specific Position\n");
    printf("7.Couting Node\n");
    printf("8.Show All\n");
    printf("9.Show All from Specific Data\n\n");
    printf("Enter Your Choice\n\n");
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
	printf("Enter Data\n");
	scanf("%d",&data);
	printf("Enter Position\n");
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
	printf("Enter Position\n");
	scanf("%d",&position);
	deleteAtS(position);
	goto M;
	case 7:
	c=0;
	printf("%d\n",countNodes());
	goto M;
	case 8:
	showAll();
	goto M;
	case 9:
	printf("Enter Data\n");
	scanf("%d",&data);
	showAll2(data);
	goto M;
	default:
	printf("Invalid Choice\n");
	goto M;
}
}
