#include<stdio.h>
#include<stdbool.h>
#define capacity 50
void push(char);
char pop();
char peek();
bool isEmpty();
int pr(char);
void showAll();
char stack[capacity];
int top=-1;
void main(){
	char input[capacity];
	char reverse[capacity];
	char output[capacity];
	printf("Enter Any Expression\n");
	scanf("%s",input);
	int i=0;
	int k=0;
	while(input[i]!='\0')
		push(input[i++]);
	while(!isEmpty())
		reverse[k++]=pop();
	reverse[k]='\0';
	i=0;
	k=0;
	while(reverse[i]!='\0'){
		if(reverse[i]==')')
			push(reverse[i]);
		else{
			if(reverse[i]>='A' && reverse[i]<='Z')
				output[k++]=reverse[i];
			else if(reverse[i]=='('){
				while(peek()!=')')
					output[k++]=pop();
				pop();
			}
			else{
				while(pr(reverse[i])<=pr(peek()))
					output[k++]=pop();
				push(reverse[i]);
			}
		}
		i++;
	}
	while(!isEmpty())
		output[k++]=pop();
	output[k]='\0';
	i=0;
	while(output[i]!='\0')
		push(output[i++]);
	showAll();
	// printf("%s",(isEmpty())?"true":"false");
}
void showAll(){
	if(top>-1){
	for(int i=top;i>=0;i--)
		printf("%c",stack[i]);
	}else printf("Stack is Empty");
}
void push(char x){
	stack[++top]=x;
}
char peek(){
	return stack[top];
}
char pop(){
	return stack[top--];
}
bool isEmpty(){
	if(top==-1)return true;
	return false;
}
int pr(char x){
	switch(x){
		case ')':return 0;
		case '+':
		case '-':return 1;
		case '/':
		case '*':return 2;
		case '^':return 3;
	}
}