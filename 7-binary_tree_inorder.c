#include "binary_trees.h"
/**
 * binary_tree_inorder - function to traverse the tree inorder
 * @tree- pointer to the root
 * @func: function to call to process the data of the node
 * Return: nothing as it's void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

