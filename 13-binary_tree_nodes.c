#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at
 * least 1 child in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of nodes
 * Return: count of node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count_nodes = 0;
	if (tree == NULL)
	return (0);
	if (tree->left != NULL || tree->right != NULL)
	count_nodes = 1;
	count_nodes += binary_tree_nodes(tree->left);
	count_nodes += binary_tree_nodes(tree->right);
return (count_nodes);
}
