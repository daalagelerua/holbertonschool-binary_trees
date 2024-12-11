#include "binary_trees.h"

/**
* binary_tree_preorder - goes through a binary tree using pre-order traversal
* @tree: pointer to the root node of th tree to traverse
* @func: pointer to a function to call for each node
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
	return;

func(tree->n); /*appel de la fonction avec la valeur du noeud comme argument*/
binary_tree_preorder(tree->left, func); /*parcourir le subtree left*/
binary_tree_preorder(tree->right, func); /*parcourir le subtree right*/
}
