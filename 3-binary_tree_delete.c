#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - delete the entire binary tree
 * @tree: a pointer to the root of the tree
 * Return: nothing (void)
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}

