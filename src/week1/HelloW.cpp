////============================================================================
//// Name        : HelloW.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <algorithm>
//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <stdio.h>
//
//using namespace std;
//
//struct Person {
//	string name;
//	string surname;
//	int age;
//};
//
///* Types, loops, main structures */
//void video1() {
//	int a = 100;
//	double pi = 3.14;
//	bool logical_value = true;
//	char c = 'c';
//
//	string str = "Hello";
//
//	cout << a << " " << pi << " " << logical_value << " " << c << endl;
//
//	for (auto x : "123456") {
//		cout << x << " ";
//	}
//	cout << endl;
//
//	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
//
//	vector<int> vec = { 1, 2, 3, 4 };
//
//	for (int i = 0; i < vec.size(); ++i) {
////		cout << "i: " << i;
//		cout << vec[i] << " ";
//	}
//
//	cout << endl;
////	cout << vec.size() << endl;
//
//	map<string, int> nums;
//	nums["one"] = 1;
//	nums["two"] = 2;
//
//	cout << "two: " << nums["two"] << endl;
//
//	vector<Person> staff;
//	staff.push_back( { "Ivan", "Ivanov", 25 });
//	staff.push_back( { "Petr", "Petrov", 25 });
//
//	cout << "First name: " << staff[0].name << endl;
//}
//
//void video2() {
//	int x = 4;
//	int y = 5;
//
//	cout << (x + y) * (x - y) << endl;
//
//	if ((x == y) || (x != y)) {
//		cout << "equal" << endl;
//	} else {
//		cout << "not equal" << endl;
//	}
//}
//
//void video3() {
//	string a = "abcdefg";
//
//	for (char c : a) {
//		cout << c << ",";
//	}
//	cout << endl;
//
//	vector<int> nums = { 1, 2, 3, 4, 5, 2, 4, 3, 2, 2, 2 };
////	vector<string> nums = {"1", "2", "3", "4"};
//
//	sort(begin(nums), end(nums));
//
//	for (auto c : nums) {
//		cout << c << ",";
//	}
//	cout << endl;
//
//	int count_twos = count(begin(nums), end(nums), 2);
//
//	cout << "Vector has " << count_twos << " twos";
//
//}
//
//void video4() {
//	string name;
//	cin >> name;
//	cout << "Hello, " << name;
//	printf("Hello %s", "123");
//}
//
///* LOOPS and CONDITIONS */
//void video5() {
//	int x = 4;
//	int y = 5;
//
//	if (x < y) {
//		cout << "True!" << endl;
//	}
//
//	vector<int> nums = { 1, 2, 3, 4, 5, 2, 4, 3, 2, 2, 2 };
//
//	int n = 5;
//	int sum = 0;
//
//	for (int i = 0; i<= n; i++) {
//		sum += i;
//	}
//
//	cout << sum << endl;
//
//	int i = 1;
//
//	while (i <= n) {
//		sum += i;
//		i += 1;
//	}
//
//	cout << sum;
//
//}
//
//int main() {
//
//	int a = 6;
//	int b = 4;
//	int c = 1;
//	cout << a / b + c / 0.4;
//
//	vector<string> w = {"a", "b", "c"};
//	vector<string> v;
//
//	v = w;
//	v[0] = "d";
//
//	cout << "w = " << w[0] << endl;
//	cout << "v = " << v[0] << endl;
//
//	string t, s = "hello";
//
//	t = s;
//	t += ", world";
//
//	cout << "s = " << s << endl;
//	cout << "t = " << t << endl;
//
//	return 0;
//}
