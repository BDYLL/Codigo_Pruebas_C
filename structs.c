#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

int main(){

	long unsigned int size = sizeof(struct node);

	printf("%lu\n", size);

	return 0;
}