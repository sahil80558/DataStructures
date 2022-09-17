#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 50
char stack[CAPACITY];
int top=-1;
bool isEmpty();

void push(int x){
	if(top==CAPACITY-1)
		printf("Stack is Full");
	else
		stack[++top]=x;
}
char peek(){
	if(isEmpty())printf("stack is empty");
	else return stack[top];
}
char pop(){
	if(isEmpty())printf("stack is empty");
	else return stack[top--];
}
bool isEmpty(){
	if(top==-1)return true;
	return false;
}
void main(){
	char x[CAPACITY];
	int i=0;
	printf("Enter Any Expression\n");
	scanf("%s",x);
	while(x[i]!='\0'){
		if(x[i]=='{' || x[i]=='(' || x[i]=='[')
			push(x[i]);
		else if(x[i]=='}' || x[i]==')' || x[i]==']'){
			if(isEmpty()){
				top=1;
				break;
			}
		if(x[i]=='}'){
				if(peek()=='{')
					pop();
				else break;
			}
		if(x[i]==')'){
				if(peek()=='(')
					pop();
				else break;
			}
		if(x[i]==']'){
				if(peek()=='[')
					pop();
				else break;
			}
		}
		i++;
	}
	if(isEmpty())
		printf("Correct Expression\n");
	else
		printf("InCorrect Expression\n");
}