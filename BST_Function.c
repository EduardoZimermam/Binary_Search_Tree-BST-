#include <stdio.h>
#include <stdlib.h>

typedef struct node_t {
	int key;
	struct node_t *left, *right, *father;			//Struct to create the node type.			
} node;

node *create_node(int term){

	node *first;

	first = (node*) malloc (sizeof(node*));						
	first->key = term;								//Function to create the first node of the program.
	first->left = NULL;
	first->right = NULL;
	first->father = NULL;

	return(first);
}

node *insert(node *node, int term){

	if (node == NULL)
		return(create_node(term));
	if (term < node->key)
		node->left = insert(node->left, term)					//Funtion for insertion of a node in BST.
	else
		node->right = insert(node->right, term);

	return(node);
}

 node *search (node *node, int term){

 	while (node != NULL) && (term != node->key)
 		if (term < node->key)
 			node = node->left									//Funtion for fetch a node in BST.
 		else
 			node = node->right;

 		return(node);
 }