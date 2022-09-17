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