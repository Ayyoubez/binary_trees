#include "binary_trees.h"
/**
 * binary_tree_leaves - function to count number of leaves
 * @tree: pointer to the root node
 * Return: number of leaves
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t number_leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
		number_leaves = 2;
	if (!tree->left || !tree->right)
		number_leaves = 1;
	if (!tree->left && !tree->right)
		number_leaves = 0;
	return (number_leaves);
}


