#include "binary_trees.h"

/**
* binary_tree_insert_left - insert node as left child
* @parent: pointer to the node to insert the child in
* @value: value to store in the new node
* Return: pointer to created node or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (parent == NULL)
	return (NULL);

new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

new->n = value;
new->parent = parent;
new->left = NULL;
new->right = NULL;

if (parent->left != NULL) /*if parent already has a left child*/
	{
	new->left = parent->left; /*current left child will be linked to new left*/
	parent->left->parent = new; /*parent of old child become new*/
	}

parent->left = new; /*if parent doesn't have a left child directly assign new*/

return (new);
}
