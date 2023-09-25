#pragma once
#include "Vector.h"
#include "forward_List.h"
#include <iostream>

class hash_table {
	Vector<List<int>> vec;

public:
	hash_table() = delete;
	hash_table(int S);
public:
	void insert(int obj);
	void print();
};