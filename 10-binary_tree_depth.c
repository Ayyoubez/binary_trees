#include "binary_trees.h"

/**
 * binary_tree_depth - function to find out the depth of a node
 * @tree: pointer to the root
 * Return: return depth or 0
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	else
		depth = binary_tree_depth(tree->parent);
	return (depth);
}
