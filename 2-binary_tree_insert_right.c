#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert right-child node
 * @parent: a pointer to the parent node
 * @value: the value to be save in the new node
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
	if (parent == NULL)
	return (NULL);
/** verification si parent est null */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	return (NULL);
/** allocation memoire et verification de l'allocation */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
/** initialisation des membres */
	if (parent->right != NULL)
{
	new_node->right = parent->right;
	parent->right->parent = new_node;
}
/** verification si parent n'est pas null et remplacer pour right */
	parent->right = new_node;
return (new_node);
}
