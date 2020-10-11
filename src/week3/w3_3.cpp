//#include <algorithm>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class ReversibleString {
//public:
//	ReversibleString() {}
//
//	ReversibleString(const string& s) {
//		_s = s;
//	}
//
//	void Reverse() {
//		reverse(_s.begin(), _s.end());
//	}
//
//	string ToString() const {
//		return _s;
//	}
//
//private:
//	string _s;
//};
//
////int main() {
////  ReversibleString s("live");
////  s.Reverse();
////  cout << s.ToString() << endl;
////
////  s.Reverse();
////  const ReversibleString& s_ref = s;
////  string tmp = s_ref.ToString();
////  cout << tmp << endl;
////
////  ReversibleString empty;
////  cout << '"' << empty.ToString() << '"' << endl;
////
////  return 0;
////}
