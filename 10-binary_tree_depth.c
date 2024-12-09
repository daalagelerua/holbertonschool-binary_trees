#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node
* @tree: pointer to the node to measure the depth of
* Return: depth of tree
*
* it's possible here to use recursion which is shorter and more elegant
* but if tree is too big, it might cause a stack overflow so we'll use
* a loop here
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth_count = 0;

if (tree == NULL)
	return (0);
/*remonter l'arbre a partir du noeud donne jusqu'a la racine*/
while (tree->parent != NULL)
	{
	depth_count++;
	tree = tree->parent; /*passer au noeud parent*/
	}
return (depth_count);
}
