#include<stdio.h>
#include<stdlib.h>
struct Node* insert(struct Node*,int);
void showAll(struct Node*);
struct Node{
	int data;
	struct Node *right;
	struct Node *left;
};
	struct Node *root=NULL;
void showAll(struct Node *temp){
	if(temp==NULL)return;
	showAll(temp->left);
	printf("%d\n",temp->data);
	showAll(temp->right);
}
void main(){
	root=insert(root,10);
	insert(root,4);
	insert(root,15);
	insert(root,2);
	insert(root,1);
	showAll(root);
}
struct Node* insert(struct Node *temp,int x){
	if(temp==NULL){
		temp=malloc(sizeof(struct Node));
		temp->data=x;
		temp->right=NULL;
		temp->left=NULL;
	}
	else if(temp->data>x)
		temp->left=insert(temp->left,x);
	else
		temp->right=insert(temp->right,x);
	return temp;
}
