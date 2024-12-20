#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a given node is a root
 * @node: pointer to node
 * Return: 1 if is a root, else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
{
	return (0);
}
	if (node->parent == NULL)
{
	return (1);
}
return (0);
}
