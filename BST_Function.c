#include <stdio.h>
#include <stdlib.h>

typedef struct node_t {
	int key;
	struct node_t *left, *right, *father;			//Struct to create the node type.			
} node;

node create_node(int term){

	node *first;

	first = (node*) malloc (sizeof(node*));						//Function to create the first node of the program.
	first->key = term;
	first->left = NULL;
	first->right = NULL;
	first->father = NULL;

	return(first);
}

node insert(node *node, int term){

	if (node == NULL)
		return(create_node(term));
	if (term < node->key)
		node->left = insert(node->left, term)
	else
		node->right = insert(node->right, term);

	return(node);
}