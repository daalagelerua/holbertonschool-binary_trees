#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: a pointer to the parent node
 * @value: the value to be save in the new node
 * Return: pointer to the new node or NULL
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
/** declaration d'un pointeur sur le nouveau noeud */
binary_tree_t *new_node;
/** allocation de la memoire pour le nouveau noeud */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	return (NULL);
/** si le nouveau noeud est null, retourner null (verification memoire) */
	new_node->n = value;
/** initialisation de la valeur du noeud (value) avec n */
	new_node->parent = parent;
/** initialisation du pointeur vers le parent du noeud */
	new_node->left = NULL;
/** initialisation a null de l'enfant gauche */
	new_node->right = NULL;
/** initialisation a null de l'enfant droite */
return (new_node);
/** retourner un pointeur vers le nouveau noeud */
}
