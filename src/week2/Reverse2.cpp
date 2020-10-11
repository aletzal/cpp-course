//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> Reversed(const vector<int> &source) {
//	vector<int> v;
//
//	for (int i = source.size() -1; i >= 0; --i) {
//		v.push_back(source[i]);
//	}
//	return v;
//	while (st < end) {
//		tmp = source[st];
//		source[st] = source[end];
//		source[end] = tmp;
//		++st;
//		--end;
//	}

//	while (st < end) {
//		source[st] ^= source[end];
//		source[end] ^= source[st];
//		source[st] ^= source[end];
//		++st;
//		--end;
//	}
//}
//
//int main() {
//	vector<int> source = {1, -2, 3, 4, 5};
//
//	vector<int> v = Reversed(source);
//
//	vector<int> v2(5);
//	cout << "vector size before: " << v2.size() << endl;
//
//	v2.push_back(10);
//	v2.resize(1);
//	v2.assign(0, 10);
//	v2.clear();
//	cout << "vector size after: " << v2.size() << endl;
//	cout << v[v.size() - 1] << endl;
//	int i = 0;
//
//	for (auto x : v) {
//		cout << ++i << ": " << x << endl;
//	}
//
//	return 0;
//}
//
//vector<int> Reversed(const vector<int>& input) {
//    auto seq = input;
//    for (int i = 0; i < seq.size() / 2; ++i) {
//        auto tmp = seq[i];
//        seq[i] = seq[seq.size() - 1 - i];
//        seq[seq.size() - 1 - i] = tmp;
//    }
//    return seq;
//}
