#include "binary_trees.h"

/**
* binary_tree_is_full - checks if binary tree is full
* @tree: Tree
* Return: 0 if NULL
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	else if (!tree->left && !tree->right)
		return (1);
	else if (tree->left && tree->right)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		if (left == 1 && right == 1)
			return (1);
	}
	return (0);
}
