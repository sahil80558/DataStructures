#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5

char stack[CAPACITY];
char top=-1;
char pop();
void push(char);
char peek();
bool isEmpty();

void push(char x){
	if(top==CAPACITY-1)printf("Stack is full\n");
	else stack[++top]=x;
}
char pop(){
	if(isEmpty())printf("Stack is Empty\n");
	else return stack[top--];
}
char peek(){
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
		printf("%c\n",stack[i]);
	}else printf("Stack is Empty");
}
void main(){
	push('A');
	push('B');
	push('B');
	showAll();
}