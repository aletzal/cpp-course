//#include <iostream>
//#include <fstream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <iomanip>
//using namespace std;
//
//struct Duration {
//	int hour;
//	int min;
//
//	Duration(int h = 0, int m = 0) {
//		int total = h * 60 + m;
//		hour = total / 60;
//		min = total % 60;
//	}
//};
//
////Duration ReadDuration(istream& input) {
////	int m = 0;
////	int h = 0;
////	input >> h;
////	input.ignore(1);
////	input >> m;
//////	return Duration(h, m);
////	return Duration { h, m };
////}
//
//istream& operator>>(istream& input, Duration& dur) {
//	input >> dur.hour;
//	input.ignore(1);
//	input >> dur.min;
//	return input;
//}
//
////void PrintDuration(ostream& out, const Duration& dur) {
////	out << setfill('0');
////	out << setw(2) << dur.hour << ":" << setw(2) << dur.min;
////}
//
//ostream& operator<<(ostream& out, const Duration& dur) {
//	out << setfill('0');
//	out << setw(2) << dur.hour << ":" << setw(2) << dur.min;
//	return out;
//}
//
//Duration operator+(const Duration& lhs, const Duration& rhs) {
//	return Duration { lhs.hour + rhs.hour, lhs.min + rhs.min };
//}
//
//bool operator<(const Duration& lhs, const Duration& rhs) {
//	if (lhs.hour == rhs.min) {
//		return lhs.min < rhs.min;
//	}
//	return lhs.hour < rhs.hour;
//}
//
//void PrintVector(vector<Duration>& v) {
//	for (const Duration& i : v) {
//		cout << i << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	stringstream dur_ss("07:57");
////	Duration d = ReadDuration(dur_ss);
//	Duration d1;
//	dur_ss >> d1;
//	Duration d2 { 0, 35 };
////	PrintDuration(cout, d);
//	Duration d3 = d1 + d2;
//	vector<Duration> v { d3, d2, d1 };
//	PrintVector(v);
//	sort(begin(v), end(v));
//	PrintVector(v);
////	cout << d1 << endl;
////	cout << d2 << endl;
////	cout << d3 << endl;
//	return 0;
//}
