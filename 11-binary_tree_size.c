#include "binary_trees.h"

/**
* binary_tree_size - Returns size of tree
* @tree: Tree to traverse
*
* Return: Size of tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
