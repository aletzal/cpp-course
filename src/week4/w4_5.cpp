//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <iomanip>
//using namespace std;
//
//struct Student {
//	string name;
//	string surname;
//	int year;
//	int month;
//	int day;
//};
//
//int main() {
//	vector<Student> sts;
////	ifstream input("src/week4/input4.txt");
////	if (input) {
//	int lines;
//	cin >> lines;
////		input >> lines;
//	while (lines > 0) {
//		Student st;
//		cin >> st.name >> st.surname;
//		cin >> st.day >> st.month >> st.year;
////		input >> st.name >> st.surname;
////		input >> st.day >> st.month >> st.year;
//		sts.push_back(st);
//		--lines;
////		}
////		cout << sts[0].name << " " << sts[0].surname << " " << sts[0].day << " "
////				<< sts[0].month << " " << sts[0].year << endl;
//	}
//	int num, pos;
//	string command;
//	cin >> num;
//	while (num > 0) {
//		cin >> command >> pos;
//		if (pos > 0 && pos <= 10000) {
//			--pos;
//			if (command == "name") {
//				cout << sts[pos].name << " " << sts[pos].surname << endl;
//			} else if (command == "date") {
//				cout << sts[pos].day << "." << sts[pos].month << "."
//						<< sts[pos].year << endl;
//			} else {
//				cout << "bad request" << endl;
//			}
//		} else {
//			cout << "bad request" << endl;
//		}
//		--num;
//	}
//	return 0;
//}
