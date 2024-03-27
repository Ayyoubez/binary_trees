#include "binary_trees.h"
/**
 * binary_tree_size - function to count number of nodes
 * @tree: Pointer to the root node
 * Return: size of the tree (number of nods)
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size);
}

