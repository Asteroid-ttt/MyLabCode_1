#include "dsaUtils.h"

using namespace std;

void generateRandomArray(int* arr, int size, int max_val, int min_val) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (max_val - min_val + 1) + min_val;
	}
}

void showArray(int* arr, int size) {
	for (int i=0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}