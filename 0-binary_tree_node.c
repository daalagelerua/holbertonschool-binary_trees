#include "binary_trees.h"

/**
* binary_tree_node - creates a binary tree node
* @parent: pointer to the parent node of the node to create
* @value: value to put in the node
* Return: pointer to the node or NULL failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new;

new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

/*initialise new node*/
new->n = value;
new->parent = parent;
new->left = NULL; /*new node as no child*/
new->right = NULL;

return (new);
}
