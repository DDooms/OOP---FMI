#include <iostream>
#include "Vector.h"

template<class T>
T addOne(T x) {
	return x + 1;
}
template<class T>
bool isEven(T number) {
	return number % 2 == 0;
}
template<class T>
T sum(Vector<T> vector) {
	size_t sum = 0;
	for (size_t i = 0; i < vector.getSize(); i++)
	{
		sum += vector[i];
	}
	return sum;
}

template<class T>
struct SmartFunc
{
	T(*mapPtr)(T) = nullptr;
	void setMap(T func(T))
	{
		mapPtr = func;
	}
	void useMap(Vector<T> & vector)
	{
		if (mapPtr)
		{
			for (size_t i = 0; i < vector.getCap(); i++)
			{
				vector[i] = mapPtr(vector[i]);
			}
		}
	}

	bool(*filterPtr)(const T&) = nullptr;
	void setFilter(bool _filterPtr(T)) {
		filterPtr = _filterPtr;
	}
	void useFilter(Vector<T>& vector) {
		if (filterPtr)
		{
			for (size_t i = 0, k = 0; i < vector.getCap(); i++)
			{
				if (!filterPtr(vector[i]))
					vector.RemoveAt(i);
			}
		}
	}
	T(*reducePtr)(Vector<T>) = nullptr;
	void setReduce(T _reducePtr(Vector<T>)) {
		reducePtr = _reducePtr;
	}
	void useReduce(Vector<T>& vector) {
		if (reducePtr)
		{
			std::cout << reducePtr(vector) << "\n";
		}
	}

	void useFilterAndReduce(Vector<T>& vector) {
		if (filterPtr && reducePtr)
		{
			this->useFilter(vector);
			this->useReduce(vector);
		}
	}
	void useMapWithReduce(Vector<T>& vector) {
		if (mapPtr && reducePtr)
		{
			this->mapPtr(vector);
			this->reducePtr(vector);
		}
	}
	void useFilterWithMap(Vector<T>& vector) {
		if (filterPtr && reducePtr)
		{
			this->filterPtr(vector);
			this->mapPtr(vector);
		}
	}
};

int main() {
	Vector<int> vector;
	vector.PushBack(2);
	vector.PushBack(3);
	vector.PushBack(4);
	vector.print();
	SmartFunc<int> smart;
	smart.setReduce(sum);
	smart.useReduce(vector);
}