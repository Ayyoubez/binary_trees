#include "binary_trees.h"

/**
 *binary_tree_balance - find the balance in the tree.
 *@tree: the root.
 *Return: the balance.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int factor;
	size_t left_height;
	size_t right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	factor = left_height - right_height;

	return (factor);
}


/**
 *binary_tree_height - measures height of a binary tree
 *@tree: is a pointer to the root node of our tree
 *Return: the height of tree, if tree is empty return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		if (left > right)
		{
			return (left + 1);
		}
		else
			return (right + 1);
	}
}
