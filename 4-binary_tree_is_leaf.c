#include "binary_trees.h"

/**
* binary_tree_is_leaf - Function that checks if a node is a leaf
* @node: Pointer to node
*
* Return: 0 or 1
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	else if ((!node->left) && (!node->right))
		return (1);
	else
		return (0);
}
