#pragma once
#include "List.h"

template <typename T>
class queue : private List<T> {
public:
	queue() : List<T>() {}
	queue(int obj) : List<T>(obj) {}

public:
	void push(T obj) { List<T>::push_front(obj); }
	void pop() { List<T>::pop_back(); }
	T top() {
		return List<T>::back();
	}
	T down() {
		return List<T>::front();
	}
};