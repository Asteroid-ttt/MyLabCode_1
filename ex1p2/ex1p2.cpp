#include <iostream>
#include <algorithm>
#include "../dsa/dsaUtils.h"

using namespace std;
int main() {
	int arr[20] = {0};
	generateRandomArray(arr, 20, 99, -99);

	cout << "Original array: ";
	showArray(arr, 20);

	sort(arr, arr+20, [](int a, int b) {
		return abs(a) < abs(b);
	});

	cout << "Sorted array: ";
	showArray(arr, 20);

	return 0;
}