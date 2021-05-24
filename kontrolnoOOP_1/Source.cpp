#include <iostream>
/*const size_t MAX_CAPACITY = 50; //task 1

template<typename T>
struct TypedBuffer {
	T* types;
	size_t size;
	T* create(size_t, T&);
	T* append(T&, T&);
	T* concat(T&, T&);
	T* union1(T&, T&);


};

int main() {
	char res[10] = "start "
	size_t len = strlen(res);
	res[len++] = 'a'
	res[len] = '\0'
}

template<typename T>
T* TypedBuffer<T>::create(size_t size, T& types)
{
	T* temp;
	types = new T[MAX_CAPACITY];
	if (size > MAX_CAPACITY)
	{
		std::cout << "Not enough capacity";
		return;
	}
	temp = types;
	delete[] types;
	return temp;
}

template<typename T>
T* TypedBuffer<T>::append(T&a, T&b)
{
	if (size > MAX_CAPACITY)
	{
		std::cout << "Not enough capacity";
		return;
	}
	for (size_t i = 0; i < size; i++)
	{
		
	}
}

template<typename T>
T* TypedBuffer<T>::concat(T&a, T&b)
{
	create(50, a);
	create(50, b);
	if (size > MAX_CAPACITY)
	{
		std::cout << "Not enough capacity";
		return;
	}
	append(a, b);
}

template<typename T>
T* TypedBuffer<T>::union1(T&, T&)
{
	
}*/
const size_t MAX_CAPACITY = 100;
class SumAvgCalculator {
	size_t number[MAX_CAPACITY];
public:
	SumAvgCalculator()
	{
		number[0] = 1;
	}
	size_t sum(size_t* numbers);
	size_t add(size_t* numbers);
	size_t sub(size_t* numbers);
	size_t num(size_t* numbers);
	size_t average(size_t* numbers);
	SumAvgCalculator operator=(const SumAvgCalculator& numbers);
	SumAvgCalculator operator+(const SumAvgCalculator& numbers);
	SumAvgCalculator operator+=(const SumAvgCalculator& numbers);

};

size_t SumAvgCalculator::sum(size_t* numbers)
{
	size_t sum = 0;
	for (size_t i = 0; i < MAX_CAPACITY; i++)
	{
		sum += numbers[i];
	}
	return sum;
}

SumAvgCalculator SumAvgCalculator::operator=(const SumAvgCalculator& numbers)
{
	if (!(this* == &numbers))
	{
		this* = numbers;
	}
	return *this;
}

SumAvgCalculator SumAvgCalculator::operator+(const SumAvgCalculator& numbers)
{
	SumAvgCalculator temp;
	temp.number = temp.number + numbers;
}

SumAvgCalculator SumAvgCalculator::operator+=(const SumAvgCalculator& numbers)
{
	return this* = this* +numbers;
}

int SumAvgCalculator::add(size_t numbers)
{

	int pos, num;
std::cout << "Enter a position";
std::cin >> pos;
	
	for(int i = 0; i>= pos, i++;){
	number[i+1] = number[i];
}
	number[pos] = numbers;
int main() 
		

