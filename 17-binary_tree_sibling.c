#include "binary_trees.h"

/**
* binary_tree_sibling - finds sibling of node
* @node: node to check
*
* Return: Pointer to sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
