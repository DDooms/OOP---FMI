#include "String.h"

void String::copy(const String& _String)
{
	size = _String.size;
	capacity = _String.capacity;
	string = new char[strlen(_String.string) + 1];
	strcpy_s(string, strlen(_String.string) + 1, _String.string);
}

void String::erase()
{
	delete[] string;
}

void String::resize()
{
	this->capacity *= 2;
	char* biggerCap = new char[capacity];

	for (size_t i = 0; i < this->size; i++)
	{
		biggerCap[i] = this->string[i];
	}
	delete[] this->string; 
	this->string = biggerCap;
}

String::String()
{
	size = 0;
	capacity = 10;
	string = new char[capacity];
	strcpy_s(string, 6, "empty");
}

String& String::operator=(const String& _String)
{
	if (this != &_String)
	{
		this->erase();
		this->copy(_String);
	}
	return *this;
}

String::String(const String& _String)
{
	this->copy(_String);
}

String::~String()
{
	this->erase();
}

const char* String::getString() const
{
	return string;
}

size_t String::getSize() const
{
	return size;
}

size_t String::getCapacity() const
{
	return capacity;
}

void String::setString(const char* _string, size_t _size, size_t _capacity)
{
	delete[] string;
	string = new char[strlen(_string) + 1];
	strcpy_s(string, strlen(_string) + 1, _string);
	size = _size;
	capacity = _capacity;
}

void String::setSize(size_t _size)
{
	size = _size;
}

void String::setCapacity(size_t _capacity)
{
	capacity = _capacity;
}

void String::print()
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << string[i] << "\n";
	}
}

void String::add(char _char)
{
	if (size>=capacity)
	{
		this->resize();
	}
	string[size] = _char;
	++size;
}

String& String::operator+=(const String& _string)
{
	this->operator+(_string);
	return *this;
}

bool String::operator==(const String& _string)
{
	for (size_t i = 0; i < size; ++i)
	{
		if (string[i] != _string.string[i])
		{
			return false;
		}
	}
	return true;
}

bool String::operator!=(const String& _string)
{
	//return this->operator!=(_string); tova dali raboti? Dava mi warning che e rekursiq
	if (this->operator==(_string))
	{
		return false;
	}
	return true;
}

char String::operator[](size_t index)
{
	if (index >= size - 1)
	{
		std::cout << "Index too big!" << std::endl;
		return 0;
	}
	return string[index];
}
String& String::operator+(const String& _string)
{
	capacity += _string.capacity;
	char* temp = new char[capacity];
	strcpy_s(temp, size, string);

	int j = 0;
	for (int i = size - 1; _string.string[j] != '\0'; ++i)
	{
		temp[i] = _string.string[j];
		++j;
	}
	size += (_string.size - 1);
	temp[size - 1] = '\0';

	delete[] string;
	string = temp;
	return *this;
}

void String::insertAt(size_t position)
{
	if (position >= size - 1)
	{
		std::cout << "Index too big!" << std::endl;
		return;
	}

	if (size >= capacity)
	{
		this->resize();
	}
	
	char symbol;
	std::cout << "Enter a symbol u want to add...";
	std::cin >> symbol;
	for (size_t i = size; i >= position; i--)
	{
		string[i + 1] = string[i];
	}
	string[position] = symbol;
	++size;
}
void String::removeAt(size_t position)
{
	if (position >= size - 1)
	{
		std::cout << "Index too big!" << std::endl;
		return;
	}

	for (size_t i = position; i < size; i++)
	{
		string[i] = string[i + 1];
	}
	--size;
}
void String::trimStart()
{
	for (size_t i = 0; i < size; ++i)
	{
		string[i] = string[i + 1];
	}
	--size;
}
void String::trimEnd()
{
	string[size - 1] = string[size];
	--size;
}
void String::trimStart2(size_t numbers)
{
	for (size_t i = 0; i < numbers; ++i)
	{
		for (size_t j = 0; j < size; ++j)
		{
			string[j] = string[j + 1];
		}
		--size;
	}
}
void String::trimEnd2(size_t numbers)
{
	for (size_t i = 0; i < numbers; ++i)
	{
		string[size - 1] = string[size];
		--size;
	}
}
