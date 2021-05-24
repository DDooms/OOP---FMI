#include <iostream>
using namespace std;

void f(int* a) {
	int b = 3;
	a = &b;
	*a = *a + 5;
	cout << *a;
	cout << b;
}

int main() {
	int a = 1;
	f(&a);
	cout << a;

}
