#include "binary_trees.h"

/**
* binary_tree_preorder - Goes through tree using pre-order traversal
* @tree: Tree to traverse
* @func: Function pointer
*
* Return: Always Void
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	else
	{
		func(tree->n);

		if (tree->left)
			binary_tree_preorder(tree->left, func);
		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
