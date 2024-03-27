#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count nodes with at least one child
 * @tree: pointer to the root node of the tree
 * Return: number of nodes with at least one child, or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    size_t count = 0;

    if (tree->left != NULL || tree->right != NULL)
        count++;

    count += binary_tree_nodes(tree->left);
    count += binary_tree_nodes(tree->right);

}
