#include "binary_trees.h"

/**
* binary_tree_insert_right - insert node as right child
* @parent: pointer to the node to insert child in
* @value: value to store in new node
* Return: pointer to created node or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

if (parent->right != NULL) /*if parent already has a child*/
	{
	new->right = parent->right; /*current right will be linked to new*/
	parent->right->parent = new; /*old child parent become new*/
	}

parent->right = new; /*if parent doesn't have a right child directly assign*/

return (new);
}
