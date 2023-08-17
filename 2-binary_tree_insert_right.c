#include "binary_trees.h"

/**
* binary_tree_insert_right - Function that inserts a node as a right child
* @parent: pointer to the parent
* @value: Value for the new node
*
* Return: Pointer to new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;

	if (!parent)
		return (NULL);

	new_child = binary_tree_node(parent, value);

	if (!new_child)
		return (NULL);

	new_child->right = parent->right;

	if (new_child->right)
		new_child->right->parent = new_child;

	parent->right = new_child;

	return (new_child);
}
