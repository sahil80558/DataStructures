#include<stdio.h>
#include<stdlib.h>
struct Node* insert(struct Node*,int x);
void showAll(struct Node*);
struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};
	struct Node *root=NULL;
void main(){
	root=insert(root,11);
	insert(root,10);
	insert(root,9);
	insert(root,8);
	insert(root,7);
	insert(root,6);
	showAll(root);
}
struct Node* insert(struct Node *temp,int x){
	if(temp==NULL){
		temp=malloc(sizeof(struct Node));
		temp->data=x;
		temp->left=NULL;
		temp->right=NULL;
	}
	else
		temp->left=insert(temp->left,x);
	return temp;
}
void showAll(struct Node *temp){
	if(temp==NULL)return;
	printf("%d\n",temp->data);
	showAll(temp->left);
	showAll(temp->right);
}	
