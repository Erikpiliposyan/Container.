#pragma once
#include "Vector.h"
#include "forward_List.h"


template<typename T>
class v_stack : private Vector<T>{


public:
	void push(T obj) { Vector<T>::push_back(obj); }
	void pop() { Vector<T>::pop_back(); }
	T top() {
		return Vector<T>::back();
	}
};

template<typename T>
class l_stack : private List<T> {
    
public:
	l_stack() : List<T>() {}
	l_stack(int obj) : List<T>(obj) {}

public:
	void push(T obj) { List<T>::push_back(obj); }
	void pop() { List<T>::pop_back(); }
	T top() {
		return List<T>::back();
	}
};






