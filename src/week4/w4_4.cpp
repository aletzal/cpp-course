//#include <iostream>
//#include <fstream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//int main() {
//	ifstream input("input.txt");
//	if (input) {
//		int lines = 0;
//		int nums = 0;
//		input >> lines >> nums;
//		while (lines > 0) {
//			for (int i = 0; i < nums; ++i) {
//				int number;
//				input >> number;
//				input.ignore(1);
//				cout << setw(10) << number;
//				if (i < nums - 1) {
//					cout << " ";
//				}
//			}
//			if (lines != 1) {
//				cout << endl;
//			}
//			--lines;
//		}
////		cout << lines << " " << nums;
//	}
////	double i = 0;
////	cout << fixed << setprecision(3);
////	if (input) {
////		input >> i;
////		cout << i << endl;
////	}
////	while (getline(input, value)) {
////		input >> i;
////		cout << i << endl;
////	}
//	return 0;
//}
