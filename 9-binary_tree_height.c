#include "binary_trees.h"

/**
 * binary_tree_height - function to find the height of a tree
 * @tree: pointer to the root node
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	else
	{
		left_height = tree->left ? 1 + (binary_tree_height(tree->left)) : 0;
		right_height = tree->right ? 1 + (binary_tree_height(tree->right)) : 0;
	}
	return ((left_height > right_height) ? left_height : right_height);

}
