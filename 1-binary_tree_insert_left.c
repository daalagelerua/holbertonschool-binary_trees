#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a left-child node
 * @parent: a pointer to the parent node
 * @value: the value to be save in the new node
 * Return: pointer to the new node or NULL
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
/** verification si parent est null */
	if (parent == NULL)
	return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	return (NULL);
/** allocation memoire et verification de l'allocation */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
/** initialisation des membres */
	if (parent->left != NULL)
{
	new_node->left = parent->left;
	parent->left->parent = new_node;
}
/** verification si parent n'est pas null et remplacer pour left */
	parent->left = new_node;
return (new_node);
}

