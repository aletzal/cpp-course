//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//void Reverse(vector<int> &source) {
//	int st = 0;
//	int end = source.size() - 1;
//
//	while (st < end) {
//		tmp = source[st];
//		source[st] = source[end];
//		source[end] = tmp;
//		++st;
//		--end;
//	}
//
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
//	Reverse(source);
//
//	for (auto x : source) {
//		cout << x << " ";
//	}
//
//	return 0;
//}
