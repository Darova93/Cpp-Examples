

template<typename T> void print_vector(vector<T> &list)
{
	for (auto item : list)
	{
		cout << item << " ";
	}
	cout << '\n';
}

template<typename U> void print_sorted_vector(vector<U> &list)
{
	sort(begin(list), end(list));
	print_vector(list);
}

template<typename V> void print_element_count(vector<V> &list, V element)
