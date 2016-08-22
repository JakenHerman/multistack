#pragma once
//c++ template for generic stack
#include <iostream>
#define boolean int

template <class T>
class stack {
private:
	enum { EMPTY = -1 };
	T* stack_array;
	int max_length;
	int top;
public:
	stack() :max_length(20)
	{	
		stack_array = new T[20]; top = EMPTY;
	}
	stack(int size) :max_length(size) {
		stack_array = new T[size]; top = EMPTY;
	}

	void push(T user_value)
	{
		if (top < (max_length - 1))
		{
			stack_array[++top] = user_value;
		}
	}

	T pop() {
		if (top != EMPTY)
		{
			return(stack_array[top--]);
		}

		return(0);
	}
};
