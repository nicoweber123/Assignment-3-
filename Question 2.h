template <typename Item_Type>
int linear_search(vector<Item_Type>& items, Item_Type& target, size_t pos_first) {
	// base case. If we reach the end and don't find what we're looking for
	if (pos_first == items.size())
		return -1;

	// Recursive call to search vector
	int result = linear_search(items, target, pos_first + 1);
	// if found later in vector
	if (result != -1)
		return result;
	// if not found later return position
	if (target == items[pos_first])
		return pos_first;
	// if not found
	return -1;
};
	

