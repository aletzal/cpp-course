//#include <iostream>
//#include <map>
//#include <set>
//
//using namespace std;
//
//int main() {
//	map<set<string>, string> buses;
//	int q;
//	cin >> q;
//	for (int i = 0; i < q; ++i) {
//		int stops;
//		cin >> stops;
//		if (stops > 0) {
//			set<string> st;
//			for (int c = 0; c < stops; ++c) {
//				string stop;
//				cin >> stop;
//				st.insert(stop);
//			}
//			if (buses.count(st) == 0) {
//				int size = buses.size() + 1;
//				buses[st] = to_string(size);
//				cout << "New bus " << buses.size() << endl;
//			} else {
//				cout << "Already exists for " << buses[st] << endl;
//			}
//		}
//	}
//
//	return 0;
//}
