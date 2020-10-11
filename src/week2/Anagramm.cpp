//#include <algorithm>
//#include <iostream>
//#include <map>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//map<char, int> BuildCharCounters(const string& word) {
//	map<char, int> letters;
//	for (const auto& l : word) {
//		++letters[l];
//	}
//	return letters;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		string w1, w2;
//		cin >> w1 >> w2;
//		if (BuildCharCounters(w1) == BuildCharCounters(w2)) {
//			cout << "YES\n";
//		} else {
//			cout << "NO\n";
//		}
//	}
//	return 0;
//}
//
