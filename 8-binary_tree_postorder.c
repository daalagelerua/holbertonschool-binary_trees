#include "binary_trees.h"

/**
* binary_tree_postorder - goes through binary tree using post-order traversal
* @tree: pointer to the root node of the tree to traverse
* @func: pointer to a function to call for each node
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
	return;

binary_tree_postorder(tree->left, func); /*parcourir subtree left*/
binary_tree_postorder(tree->right, func); /*parcourir subtree right*/
func(tree->n); /*appel de la fonction avec la valeur du noeud comme argument*/
}
