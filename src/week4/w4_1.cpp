////#include <algorithm>
////#include <iostream>
////#include <string>
////#include <vector>
////
////using namespace std;
//
//struct Specialization {
//	string spec;
//
//	explicit Specialization(string s) {
//		spec = s;
//	}
//};
//
//struct Course {
//	string course;
//
//	explicit Course(string c) {
//		course = c;
//	}
//};
//
//struct Week {
//	string week;
//
//	explicit Week(string w) {
//		week = w;
//	}
//};
//
//struct LectureTitle {
//	string specialization;
//	string course;
//	string week;
//
//	explicit LectureTitle(Specialization s, Course c, Week w) {
//		specialization = s.spec;
//		course = c.course;
//		week = w.week;
//	}
//};
//
////int main() {
////
////	LectureTitle title(Specialization("C++"), Course("White belt"),
////			Week("4th"));
////
////	LectureTitle title("C++", "White belt", "4th");
////
////	LectureTitle title(string("C++"), string("White belt"), string("4th"));
////
////	LectureTitle title = { "C++", "White belt", "4th" };
////
////	LectureTitle title = { { "C++" }, { "White belt" }, { "4th" } };
////
////	LectureTitle title(Course("White belt"), Specialization("C++"),
////			Week("4th"));
////
////	LectureTitle title(Specialization("C++"), Week("4th"),
////			Course("White belt"));
////
////	return 0;
////}
