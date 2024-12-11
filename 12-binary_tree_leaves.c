#include "binary_trees.h"

/**
* binary_tree_leaves - counts number of leaves in the tree
* @tree: pointer to the root node of the tree to count the number of leaves
* Return: number of leaves in the tree
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);
/*si le premier noeud est une leaf*/
if (tree->left == NULL && tree->right == NULL)
	return (1);
/*sinon, on compte les leafs des sous-arbres*/
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
