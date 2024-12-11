#include "binary_trees.h"

/**
* binary_tree_uncle - Finds the uncle of a node in a binary tree.
* @node: A pointer to the node to find the uncle of.
* Return: If node is NULL or has no uncle, NULL.
*         Otherwise, a pointer to the uncle node.
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
/*node->parent NULL = node is root/n->p->p NULL = parent of node is root*/
if (!node || !node->parent || !node->parent->parent)
	return (NULL);
/*if node->parent is left child of his grand-parent*/
if (node->parent->parent->left == node->parent)
	return (node->parent->parent->right); /*uncle would be right child of gp*/
return (node->parent->parent->left); /*if not uncle is left child of gp*/
}
