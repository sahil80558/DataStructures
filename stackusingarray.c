#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5

int stack[CAPACITY];
int top=-1;
int pop();
void push(int);
int peek();
bool isEmpty();

void push(int x){
	if(top==CAPACITY-1)printf("Stack is full\n");
	else stack[++top]=x;
}
int pop(){
	if(isEmpty())printf("Stack is Empty\n");
	else return stack[top--];
}
int peek(){
	if(isEmpty())printf("Stack is Empty\n");
	else return stack[top];
}
bool isEmpty(){
	if(top==-1)return true;
	return false;
}
void showAll(){
	if(top>-1){
	for(int i=0;i<=top;i++)
		printf("%d\n",stack[i]);
	}else printf("Stack is Empty");
}
void main(){
	int choice,data;
	
	M:
	printf("\n--------------------MENU--------------------\n\n");
	printf("1.Push data in Stack\n");
	printf("2.Peek data in Stack\n");
	printf("3.Pop data in Stack\n");
	printf("4.Show All\n\n");
	printf("Enter Your Choice\n");
	scanf("%d",&choice);
	printf("\n");
	
	switch(choice){
		case 1:
		printf("Enter Data\n");
		scanf("%d",&data);
		push(data);
		goto M;
		case 2:
		printf("%d\n",peek());
		goto M;
		case 3:
		printf("%d\n",pop());
		goto M;
		case 4:
		showAll();
		goto M;
		default:
		printf("Invalid Choice\n");
		goto M;
	}
}