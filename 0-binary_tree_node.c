#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - a function to create a new node
 * @parent: pointer to the parent node
 * @value: value of the created node
 * Return: a pointer to the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t *));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
