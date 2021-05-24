#pragma once
#include <iostream>
#include <cstring>
class String
{
private:
	char* string;
	size_t size;
	size_t capacity;

	void copy(const String& _String);
	void erase();
	void resize();
public:
	String();
	String& operator=(const String& _String);
	String(const String& _String);
	~String();

	const char* getString() const;
	size_t getSize() const;
	size_t getCapacity() const;
	void setString(const char* _string, size_t _int, size_t _capacity);
	void setSize(size_t _size);
	void setCapacity(size_t _capacity);
	void print();

	void add(char _char);
	void insertAt(size_t position);
	void removeAt(size_t position);
	void trimStart();
	void trimEnd();
	void trimStart2(size_t numbers);
	void trimEnd2(size_t numbers);

	String& operator+(const String& _string);
	String& operator+=(const String& _string);
	bool operator==(const String& _string);
	bool operator!=(const String& _string);
	char operator[](size_t index);


};

