#include "binary_trees.h"

/**
 *binary_tree_is_perfect - check if tree is perfect
 *@tree: the tree.
 *Return: 1 if it's perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int d = depth(tree);

if (!tree)
return (0);

if (is_perfect(tree, d, 0))
return (1);
return (0);
}

/**
 *depth - func that measures the depth of a node in a binary tree
 *@node: pointer to the node to measure the depth
 *Return: 0 if function is NULL
 */

int depth(const binary_tree_t *node)
{
int d = 0;
while (node != NULL)
{
d++;
node = node->left;
}
return (d);
}

/**
 *is_perfect - func that measures the depth of a node in a binary tree
 *@tree: pointer to the node to measure the depth
 *@d: the deapth.
 *@level: level of the node.
 *Return: 0 if function is NULL.
 */

int is_perfect(const binary_tree_t *tree, int d, int level)
{

if (tree == NULL)
return (1);

if (tree->left == NULL && tree->right == NULL)
return (d == level + 1);

if (tree->left == NULL || tree->right == NULL)
return (0);

return (is_perfect(tree->left, d, level + 1) &&
is_perfect(tree->right, d, level + 1));
}
