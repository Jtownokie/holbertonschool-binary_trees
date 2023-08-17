#include "binary_trees.h"

/**
* binary_tree_insert_left - Function that inserts a node on left side of tree
* @parent: pointer to the parent
* @value: Value for new node
*
* Return: Pointer to new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;

	if (!parent)
		return (NULL);

	new_child = binary_tree_node(parent, value);

	if (!new_child)
		return (NULL);

	new_child->left = parent->left;

	if (new_child->left)
		new_child->left->parent = new_child;

	parent->left = new_child;

	return (new_child);
}
