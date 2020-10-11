//#include <algorithm>
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	vector<string> v(n);
//	for (auto& x : v) {
//		cin >> x;
//	}
//	sort(begin(v), end(v), [](string a, string b) {
//		for (auto& i : a) {
//			i = tolower(i);
//		}
//		for (auto& i : b) {
//			i = tolower(i);
//		}
//		return a < b;
//	});
//	for (const auto& x : v) {
//		cout << x << " ";
//	}
//
//	return 0;
//}
