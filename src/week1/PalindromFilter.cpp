//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool IsPalindrom(string s) {
//    for (size_t i = 0; i < s.size() / 2; ++i) {
//        if (s[i] != s[s.size() - i - 1]) {
//            return false;
//        }
//    }
//    return true;
//}
//
//vector<string> PalindromFilter(vector<string> words, int minLength) {
//	vector<string> result;
//	for (auto w : words) {
//		if (w.size() < minLength) {
//			continue;
//		}
//		if (IsPalindrom(w)) {
//			result.push_back(w);
//		}
//	}
//	return result;
//}
