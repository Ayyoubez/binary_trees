#include "binary_trees.h"

/**
 * binary_tree_height - function to find the height of a tree
 * @tree: pointer to the root node
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);
	return (left_height > right_height ? left_height : right_height) + 1;
}
