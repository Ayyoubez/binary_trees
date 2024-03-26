#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if leaf 0 is no-leaf or empty tree
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || (node->left != NULL && node->right != NULL))
		return (0);
	return (1);
}
