#include "binary_trees.h"

/**
 * binary_tree_preorder - function to traverse the tree pre-order
 * @tree: pointer to the root
 * @func: function to call to process the data of the node
 * Return: nothing as it's void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
