#include "binary_trees.h"

/**
 *binary_tree_sibling - func that finds the sibling of a node
 *@node: pointer to the node to find the sibling
 *Return: Pointer to sibling node
 *
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
