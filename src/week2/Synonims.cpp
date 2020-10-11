//#include <iostream>
//#include <map>
//#include <set>
//
//using namespace std;
//
//int main() {
//	map<string, set<string>> m;
//	int q;
//	cin >> q;
//	for (int i = 0; i < q; ++i) {
//		string operation_code;
//		cin >> operation_code;
//
//		if (operation_code == "ADD") {
//			string w1, w2;
//			cin >> w1 >> w2;
//			if (w1 != w2) {
//				m[w1].insert(w2);
//				m[w2].insert(w1);
//			}
//		}
//
//		if (operation_code == "COUNT") {
//			set<string> all;
//			string w;
//			cin >> w;
//			if (m.count(w) != 0) {
//				cout << m[w].size() << endl;
//			} else {
//				cout << 0 << endl;
//			}
//		}
//
//		if (operation_code == "CHECK") {
//			string syn = "NO";
//			string w1, w2;
//			cin >> w1 >> w2;
//			if (m.count(w1) != 0) {
//				if (m[w1].count(w2) != 0)
//					syn = "YES";
//			}
//			if (m.count(w2) != 0) {
//				if (m[w2].count(w1) != 0)
//					syn = "YES";
//			}
//			cout << syn << endl;
//		}
//	}
//	return 0;
//}
