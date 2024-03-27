#include "binary_trees.h"

/**
 *binary_trees_ancestor - find the ancestor of two nodes.
 *@first: first child.
 *@second: the second child.
 *Return: the ancestor.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{

const binary_tree_t *parent_first;
const binary_tree_t *parent_second;

if (!first || !second)
return (NULL);

parent_first = first;
parent_second = second;

while (parent_first != NULL)
{
parent_second = second->parent;
while (parent_second != NULL)
{
if (parent_first == parent_second)
return ((binary_tree_t *)parent_first);
parent_second = parent_second->parent;
}
parent_first = parent_first->parent;
}

parent_first = first;
parent_second = second;

while (parent_second != NULL)
{
parent_first = first->parent;
while (parent_first != NULL)
{
if (parent_second == parent_first)
return ((binary_tree_t *)parent_second);
parent_first = parent_first->parent;
}
parent_second = parent_second->parent;
}


return (NULL);
}
