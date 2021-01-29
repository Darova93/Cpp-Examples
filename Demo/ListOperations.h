#pragma once
#include <iostream>
using std::cout;
using std::cin;

#include <vector>
using std::vector;
using std::begin;
using std::end;

#include <algorithm>
using std::sort;
using std::count;

template <typename T> 
void print_vector(vector<T> const &list)
{
	for (auto item : list)
	{
		cout << item << " ";
	}
	cout << '\n';
}

template <typename U> 
void print_sorted_vector(vector<U> &list)
{
	sort(begin(list), end(list));
	print_vector(list);
}

template <typename V> 
void print_element_count(vector<V> const &list, V const &element)
{
	int amount = count(begin(list), end(list), element);
	cout << "Vector has " << amount << " elements with value " << element;
}