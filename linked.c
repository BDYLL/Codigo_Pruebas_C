#include <stdio.h>
#include <stdlib.h>

struct node{
	int x;
	struct node *next;
};

struct node* init(int x){
	struct node *root;

	root = (struct node*)malloc(sizeof(struct node));

	if(root!=0){
		root->x=x;
		root->next=0;
		return root;
	}
	else{
		return 0;
	}
}

void setNext(struct node *cur, int x){
	cur->next=(struct node*)malloc(sizeof(struct node));
	cur->next->x=x;
}

// deletes the node next to the passed pointer
void delete(struct node *prev){
	if(prev->next!=0){
		struct node *tmp = prev->next;
		prev->next=tmp->next;
		free(tmp);
		tmp=0;
	}
}

void flush(struct node *root){
	struct node *tmp=root;
	struct node *prev=(struct node*)malloc(sizeof(struct node));
	while(tmp!=0){
		prev=tmp;
		tmp=tmp->next;
		free(prev);
	}
	free(tmp);
	tmp=0;
	prev=0;
}

// returns the size of the linked list
int size(struct node* root){
	int c=0;

	struct node *tmp=root;

	while(tmp!=0){
		c++;
		tmp=tmp->next;
	}

	tmp=0;
	free(tmp);

	return c;
}

void toList(int a[], int size, struct node *root){
	struct node *tmp=root;
	int i;
	for(i=0;i<size;i++){
		setNext(tmp,i);
		tmp=tmp->next;
	}
}

void printList(struct node *root){
	if(root!=0){
	struct node* tmp=root;

	while(tmp!=0){
		printf("[%d]->",tmp->x);
		tmp=tmp->next;
	}
	printf("X\n");

	tmp=0;
	free(tmp);
	}
	else{
		printf("Empty\n");
	}
}

int main(){
	struct node *root = init(0);
	struct node *tmp =root;
	int i;

	for(i=1;i<10;i++){
		setNext(tmp,i);
		tmp=tmp->next;
	}

	printList(root);
	printf("%d\n",size(root));

	flush(root);
	free(root);
	root=0;
	printList(root);
	printf("%d\n",size(root));

	/*int a[] ={0,1,2,3,4};
	int size=sizeof(a)/sizeof(a[0]);
	struct node *root=init(0);

	toList(a,size,root);

	printList(root);*/


	return 0;
}

