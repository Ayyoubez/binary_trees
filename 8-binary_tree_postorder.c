#include "binary_trees.h"
/**
 * binary_tree_postorder - function to traverse the tree postorder
 * @tree- pointer to the root
 * @func: function to call to process the data of the node
 * Return: nothing as it's void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
