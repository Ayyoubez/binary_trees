#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to insert right child
 * @parent: pointer to the parent node
 * @value: node value
 * Return: returns node inserted
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *new_node;

        if (parent == NULL)
                return (NULL);
        new_node = binary_tree_node(parent, value);
        if (new_node == NULL)
                return (NULL);
        if (parent->right != NULL)
        {
                new_node->right = parent->right;
                parent->right->parent = new_node;
        }
	parent->right = new_node;
        new_node->parent = parent;
        return (new_node);
}
