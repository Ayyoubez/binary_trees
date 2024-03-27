#include "binary_trees.h"

/**
 *binary_tree_nodes - nodes of a binary tree.
 *@tree: the root of the binary tree.
 *Return: the number of node with at least 1 child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t number_leaves = 0;

if (tree == NULL)
return (0);

if (tree->left != NULL || tree->right != NULL)
number_leaves++;

number_leaves += binary_tree_nodes(tree->left);
number_leaves += binary_tree_nodes(tree->right);

return (number_leaves);

}
