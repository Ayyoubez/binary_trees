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
	if (!tree->left && !tree->right)
		return (1);
	number_leaves += binary_tree_leaves(tree->left);
	number_leaves += binary_tree_leaves(tree->right);
	return (number_leaves);
}
