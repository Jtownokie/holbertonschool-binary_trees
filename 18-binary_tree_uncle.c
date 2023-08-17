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

/**
* binary_tree_uncle - Finds the uncle of a node
* @node: node to find
*
* Return: Pointer to uncle node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle_node;

	if (!node || !node->parent)
		return (NULL);
	uncle_node = binary_tree_sibling(node->parent);
	return (uncle_node);
}
