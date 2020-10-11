//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//void printv(const vector<int>& v) {
//	for (auto x : v) {
//		cout << x << " ";
//	}
//	cout << endl;
//}
//
//int mathAverage(const vector<int>& v) {
//	int sum = 0;
//	for (auto x : v) {
//		sum += x;
//	}
//	return sum / v.size();
//}
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> v(n);
//	for (int& i : v) {
//		cin >> i;
//	}
//	int avg = mathAverage(v);
//	int idx = 0;
//	vector<int> rv;
//	for (auto i : v) {
//		if (avg < i) {
//			rv.push_back(idx);
//		}
//		++idx;
//	}
//	cout << rv.size() << endl;
//	printv(rv);
//
//	return 0;
//}
