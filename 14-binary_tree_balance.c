#include "binary_trees.h"

/**
* binary_tree_balance - Measures balance factor of a tree
* @tree: Tree to traverse
*
* Return: Balance Factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_left = binary_tree_height(tree->left);
	else
		height_left -= 1;

	if (!tree->right)
		height_right -= 1;
	else
		height_right = binary_tree_height(tree->right);

	return (height_left - height_right);
}
