#include<stdio.h>
#include<stdbool.h>
#define  capacity 50
void push(char);
char pop();
char peek();
int pr(char);
bool isempty();
char stack[capacity];
int top=-1;
void main()
{
char input[capacity];
char output[capacity];
printf("Enter any Expression");
scanf("%s",input);
int i=0;
int k=0;
while(input[i]!='\0')
{
if(input[i]=='(')
{
push(input[i]);
}
else
{
if(input[i]>='A'&& input[i]<='Z')
{
output[k++]=input[i];
}
else if(input[i]==')')
{
while(peek()!='(')
{
output[k++]=pop();
}
pop();
}
else
{
while(pr(peek())>=pr(input[i]))
{
output[k++]=pop();
}
push(input[i]);
}
}
i++;
}
while(!isempty())
{
output[k++]=pop();
}
output[k]='\0';
printf("%s\n",output);
}
void push(char x)
{
stack[++top]=x;
}
char pop()
{
return stack[top--];
}
char peek()
{
return stack[top];
}
bool isempty()
{
if(top==-1)return true;
return false;
}
int pr(char x)
{
switch(x)
{
  case '(':return 0;
  case '+':
  case '-':return 1;
  case '*':
  case '/':return 2;
  case '^':return 3;
}
}