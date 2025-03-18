#include <iostream>
using namespace std;


template <typename X, typename Y>
void myswap(X& x, Y& y) {
	auto temp = x;
	x = y;
	y = temp;
}

int main() {
	int a = 1;
	double b = 3.14;
	cout << "Before swap: " << a <<" "<< b << endl;
	myswap(a, b);
	cout << "After swap: " << a <<" "<< b << endl;
	cout << endl;
	int a_int = 1;
	int b_int = 3;
	cout << "Before swap: " << a_int << " " << b_int << endl;
	myswap(a_int, b_int);
	cout << "After swap: " << a_int << " " << b_int << endl;
	cout << endl;
	double a_double = 1.14;
	double b_double = 3.14;
	cout << "Before swap: " << a_double << " " << b_double << endl;
	myswap(a_double, b_double);
	cout << "After swap: " << a_double << " " << b_double << endl;
}