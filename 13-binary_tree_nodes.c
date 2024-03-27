#include "binary_trees.h"
<<<<<<< HEAD

/**
 *binary_tree_nodes - nodes of a binary tree.
 *@tree: the root of the binary tree.
 *Return: the number of node with at least 1 child.
=======
/*
 * binary_tree_nodes - count number of nodes
 * @tree: pointer to the root node
 * Return: number of nodes
 *
>>>>>>> 42dd807 (Next)
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
<<<<<<< HEAD
size_t number_leaves = 0;

if (tree == NULL)
return (0);

if (tree->left != NULL || tree->right != NULL)
number_leaves++;

number_leaves += binary_tree_nodes(tree->left);
number_leaves += binary_tree_nodes(tree->right);

return (number_leaves);

=======
	size_t number_nodes = 0;

	if (tree == NULL)
		return (0);
	number_nodes++;
	number_nodes += binary_tree_nodes(tree->left);
	number_nodes += binary_tree_nodes(tree->right);
	return (number_nodes);
>>>>>>> 42dd807 (Next)
}
