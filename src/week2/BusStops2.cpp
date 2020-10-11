//#include <iostream>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	map<vector<string>, string> buses;
//	int q;
//	cin >> q;
//	for (int i = 0; i < q; ++i) {
//		int stops;
//		cin >> stops;
//		if (stops > 0) {
//			vector<string> v;
//			for (int c = 0; c < stops; ++c) {
//				string stop;
//				cin >> stop;
//				v.push_back(stop);
//			}
//			if (buses.count(v) == 0) {
//				int size = buses.size() + 1;
//				buses[v] = to_string(size);
//				cout << "New bus " << buses.size() << endl;
//			} else {
//				cout << "Already exists for " << buses[v] << endl;
//			}
//		}
//	}
//
//	return 0;
//}
