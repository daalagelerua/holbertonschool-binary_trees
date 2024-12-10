#include "binary_trees"

/**
* tree_height - calculate the height of a binary tree
* @tree: pointer to the root node of a tree
* Return: the height of the tree or 0 if tree is NULL
*/

static size_t tree_height(const binary_tree_t *tree)
{
size_t t_left, t_right;

if (tree == NULL)
	return (0);

t_left = tree_height(tree->left);
t_right = tree_height(tree->right);

retrun ((t_left > t_right ? t_left : t_right) + 1);
}

/**
* is_full - check if all non leaf nodes have exactly 2 child
* @tree: pointer to the node to check
* Return: 1 if node is full or 0
*/

static int is_full(const binary_tree_t *tree)
{
if (tree == NULL) /*a NULL node is considered full*/
	return (1);
if (tree->left == NULL && tree->right == NULL) /*if node is leaf it's full*/
	return (1);
if (tree->left && tree->right) /*if node as 2 child it's full*/
	return (1);
return (0); /*otherwise node as 1 child so it's not full*/
}

/**
* same_level - check if leaves are at the same level
* @tree: pointer to the root node of the tree to check
* @depth: the expected depth of the leaf
* @level: the current level
* Return: 1 if leaves are same level or 0
*/

static int same_level(const binary_tree_t *tree, size_t depth, size_t level)
{
if (tree == NULL) /*if node is NULL it doesn't affect the result*/
	return (1);

if (tree->left == NULL && tree->right == NULL) /*if node is a leaf*/
	return (depth == level); /*check if it's at expected depth*/

return (same_level(tree->left, depth, level + 1)) &&
		(same_level(tree->right, depth, level + 1));
}


