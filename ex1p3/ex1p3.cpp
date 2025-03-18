#include <iostream>
#include <algorithm>
#include "../dsa/dsaUtils.h"

using namespace std;
int main() {
	int* arr = new int[30];

	generateRandomArray(arr, 20, 99, -99);

	cout << "Original array: ";
	showArray(arr, 20);

	int* result_50 = find(arr, arr + 30, 50); //如果找到50，返回指向50的指针，否则返回arr+30
	if (*result_50 == 50) {
		cout << "50 is found at " << result_50 - arr + 1 << "th position." << endl;
	} else {
		cout << "50 is not found." << endl;
	}

	int* result_40_90 = find_if(arr, arr + 30, [](int x) {  //find_if 的第三个参数是一个bool类型的变量
		return x > 40 && x < 90;
		});
	if (*result_40_90 > 40 && *result_40_90 < 90) {
		cout << "The first one is " << *result_40_90 << " at " << result_40_90 - arr + 1 << "th position." << endl;
	}
}