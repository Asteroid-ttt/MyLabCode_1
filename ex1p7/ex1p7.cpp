#include <iostream>
#include <complex>
using namespace std;
void printComplex(complex<double> num) {
	if (num.imag() == 0 && num.real() != 0) {
		cout << num.real()<<endl;
	}
	else if (num.real() == 0 && num.imag() == 0) {
		cout << 0 << endl;
	}
	else if (num.real() == 0) {
		cout << num.imag() << "i";
	}
	else {
		if (num.imag() > 0)
			cout << num.real() << "+" << num.imag() << "i" << endl;
		else
			cout << num.real() << "-" << -num.imag() << "i" << endl;
	}
}
int main() {
	complex<double> num1(3, 4);
	complex<double> num2(1, 4);
	cout << "Num1 = ";
	printComplex(num1);
	cout << "Num2 = ";
	printComplex(num2);

	complex<double> sum = num1 + num2;
	cout << "Num1 + Num2 = ";
	printComplex(sum);
	
	complex<double> sub = num1 - num2;
	cout << "Num1 - Num2 = ";
	printComplex(sub);

	complex<double> mul = num1 * num2;
	cout << "Num1 * Num2 = ";
	printComplex(mul);

	complex<double> div = num1 / num2;
	cout << "Num1 / Num2 = ";
	printComplex(div);

	complex<double> conj = std::conj(num1);
	cout << "Conjugate of Num1 = ";
	printComplex(conj);

	double abs = std::abs(num1);
	cout << "Absolute value of Num1 = " << abs << endl;
}