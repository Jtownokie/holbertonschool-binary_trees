#include "binary_trees.h"

/**
* binary_tree_delete - Function that deletes a binary tree
* @tree: Tree to delete
*
* Return: Always void
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
