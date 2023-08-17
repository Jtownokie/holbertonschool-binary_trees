#include "binary_trees.h"

/**
* binary_tree_inorder - Goes through tree using in-order traversal
* @tree: Tree to traverse
* @func: Function pointer
*
* Return: Always Void
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
		binary_tree_inorder(tree->left, func);

	func(tree->n);

	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
