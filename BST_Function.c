#include <stdio.h>
#include <stdlib.h>

typedef struct node_t {
	char *key;
	struct node_t *left, *right, *father;			//Struct to create the node type.			
} node;

void create_node(){

	node *first;

	first = (node*) malloc (sizeof(node*));			//Function to create the first node of the program.
	first->left = NULL;
	first->right = NULL;
	first->father = NULL;
}