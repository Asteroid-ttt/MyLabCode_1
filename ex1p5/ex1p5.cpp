#include <iostream>
#include <vector>
#include "../dsa/Student.h"

using namespace std;

int main() {
	/*  int的线性表  */
	vector<int> arr = {1,2,4,5};
	arr.push_back(6);  //在末尾添加6
	arr.insert(arr.begin()+2, 3);  //在第二个数字之后插入3

	vector<Student> students = { {123,"Name1",18,90},{124,"Name2",19,95.5} };
	students.push_back({ 125,"Name3",20,100 });  
	students.insert(students.begin() + 1, { 126,"Name4",21,82.5 });
	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;

	for (auto it : students) {
		cout << it.name << " is " << it.age << " years old, and his/her score is " << it.score << endl;
	}
}
