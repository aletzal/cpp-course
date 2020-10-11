//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int getWorryCount(const vector<string>& v) {
//	int n = 0;
//	for (auto& x : v) {
//		if (x == "WORRY") ++n;
//	}
//	return n;
//}
//
//void exec(vector<string>& v, string command, int n, vector<string>& r) {
//	if (command == "COME") {
//		v.resize(v.size() + n);
//	} else if (command == "QUIET") {
//		v[n] = "QUIET";
//	} else if (command == "WORRY") {
//		v[n] = "WORRY";
//	} else if (command == "WORRY_COUNT") {
//		r.push_back(to_string(getWorryCount(v)));
//	}
//}
//
////void printv(const vector<int>& v) {
////	for (auto x : v) {
////		cout << x << " ";
////	}
////	cout << endl;
////}
//
//int main() {
//	vector<string> q;
//	vector<string> r;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		string command;
//		int value;
//		cin >> command;
//		if (command != "WORRY_COUNT") {
//			cin >> value;
//		}
//		exec(q, command, value, r);
//	}
//	for (auto i : r) {
//		cout << i << endl;
//	}
//	return 0;
//}
//
///*
//
//8
//COME 5
//WORRY 1
//WORRY 4
//COME -2
//WORRY_COUNT
//COME 3
//WORRY 3
//WORRY_COUNT
//
// */
