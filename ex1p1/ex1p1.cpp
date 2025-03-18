#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char* argv[]) {
	int num1, num2;
	if (argc == 3) {
		num1 = stoi(argv[1]);
		num2 = stoi(argv[2]);
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	}
	else {
		cout << "Error" << endl;
	}
	vector<string> str{ "Hello", "C++", "World","!" };
	for (int i = 0; i < 4; i++) {
		cout << str[i] << " ";
	}
	return 0;
}